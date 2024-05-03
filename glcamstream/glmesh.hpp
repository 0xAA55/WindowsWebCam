#pragma once

#include "glfwwrap.hpp"
#include "glprogram.hpp"
#include "glvertex.hpp"

#include <vector>
#include <unordered_map>

namespace GLRenderer
{
	using namespace GL;

	template <typename Te> concept ElementsType = requires
	{
		requires
			std::is_same_v<Te, GLubyte> ||
			std::is_same_v<Te, GLushort> ||
			std::is_same_v<Te, GLuint>;
	};

	template <typename Tv, ElementsType Te, typename Ti>
	class Mesh
	{
	protected:
		const GLCtxType& gl;
		std::unordered_map<GLuint, GLuint> Pipelines;

	public:
		GLuint VertexBuffer = 0;
		GLuint ElementsBuffer = 0;
		GLuint InstancesBuffer = 0;
		GLsizei NumVertices = 0;
		GLsizei NumElements = 0;
		GLsizei NumInstances = 0;

		GLuint GetAssociatedVAO(const Program& ShaderProgram)
		{
			return Pipelines.at(ShaderProgram);
		}

		void Draw(GLsizei InstanceCount)
		{
			if (InstanceCount > 0 && InstancesBuffer)
			{
				if (NumElements)
				{
					gl.BindBuffer(gl.ELEMENT_ARRAY_BUFFER, ElementsBuffer);
					if constexpr (std::is_same_v<Te, GLubyte>)
						gl.DrawElementsInstanced(gl.TRIANGLES, NumElements, gl.UNSIGNED_BYTE, nullptr, InstanceCount);
					else if constexpr (std::is_same_v<Te, GLushort>)
						gl.DrawElementsInstanced(gl.TRIANGLES, NumElements, gl.UNSIGNED_SHORT, nullptr, InstanceCount);
					else if constexpr (std::is_same_v<Te, GLuint>)
						gl.DrawElementsInstanced(gl.TRIANGLES, NumElements, gl.UNSIGNED_INT, nullptr, InstanceCount);
					else
						throw std::invalid_argument("Could not cast `ElementsType` to a type.");
					gl.BindBuffer(gl.ELEMENT_ARRAY_BUFFER, 0);
				}
				else
				{
					gl.DrawArraysInstanced(gl.TRIANGLES, 0, NumVertices, InstanceCount);
				}
			}
			else
			{
				if (NumElements)
				{
					gl.BindBuffer(gl.ELEMENT_ARRAY_BUFFER, ElementsBuffer);
					if constexpr (std::is_same_v<Te, GLubyte>)
						gl.DrawElements(gl.TRIANGLES, NumElements, gl.UNSIGNED_BYTE, nullptr);
					else if constexpr (std::is_same_v<Te, GLushort>)
						gl.DrawElements(gl.TRIANGLES, NumElements, gl.UNSIGNED_SHORT, nullptr);
					else if constexpr (std::is_same_v<Te, GLuint>)
						gl.DrawElements(gl.TRIANGLES, NumElements, gl.UNSIGNED_INT, nullptr);
					else
						throw std::invalid_argument("Could not cast `ElementsType` to a type.");
					gl.BindBuffer(gl.ELEMENT_ARRAY_BUFFER, 0);
				}
				else
				{
					gl.DrawArrays(gl.TRIANGLES, 0, NumVertices);
				}
			}
		}

		Mesh(const GLCtxType& GLCtx) :
			gl(GLCtx)
		{
		}
	public:
		Mesh() = delete;
		Mesh(const GLCtxType& GLCtx, const std::vector<Tv>& Vertices) :
			Mesh(GLCtx)
		{
			NumVertices = GLsizei(Vertices.size());
			if (!NumVertices) throw std::invalid_argument("Meshes must have vertices.");

			gl.GenBuffers(1, &VertexBuffer);
			gl.BindBuffer(gl.ARRAY_BUFFER, VertexBuffer);
			gl.BufferData(gl.ARRAY_BUFFER, sizeof(Vertices[0]) * Vertices.size(), &Vertices[0], gl.STATIC_DRAW);
			gl.BindBuffer(gl.ARRAY_BUFFER, 0);
		}
		Mesh(const GLCtxType& GLCtx, const std::vector<Tv>& Vertices, const std::vector<Te>& Indices) :
			Mesh(GLCtx, Vertices)
		{
			NumElements = GLsizei(Indices.size());
			if (NumElements)
			{
				gl.GenBuffers(1, &ElementsBuffer);
				gl.BindBuffer(gl.ELEMENT_ARRAY_BUFFER, ElementsBuffer);
				gl.BufferData(gl.ELEMENT_ARRAY_BUFFER, sizeof(Indices[0]) * Indices.size(), &Indices[0], gl.STATIC_DRAW);
				gl.BindBuffer(gl.ELEMENT_ARRAY_BUFFER, 0);
			}
		}
		Mesh(const GLCtxType& GLCtx, const std::vector<Tv>& Vertices, const std::vector<Te>& Indices, const std::vector<Ti>& Instances) :
			Mesh(GLCtx, Vertices, Indices)
		{
			NumInstances = GLsizei(Instances.size());
			if (NumInstances)
			{
				gl.GenBuffers(1, &InstancesBuffer);
				gl.BindBuffer(gl.ARRAY_BUFFER, InstancesBuffer);
				gl.BufferData(gl.ARRAY_BUFFER, sizeof(Instances[0]) * Instances.size(), &Instances[0], gl.DYNAMIC_DRAW);
				gl.BindBuffer(gl.ARRAY_BUFFER, 0);
			}
		}
		~Mesh()
		{
			GLuint Buffers[3] = { VertexBuffer , ElementsBuffer, InstancesBuffer };
			gl.DeleteBuffers(3, Buffers);
		}

		void DescribeArrayBuffer(const Program& ShaderProgram)
		{
			gl.BindBuffer(gl.ARRAY_BUFFER, VertexBuffer);
			if constexpr (Tv::HasPosition)
			{
				ShaderProgram.SetVertexAttrib<Tv::PositionDim, Tv::PositionType::value_type>
					("iPosition", reinterpret_cast<void*>(Tv::PositionOffset), false, sizeof(Tv));
			}
			if constexpr (Tv::HasTexCoord)
			{
				ShaderProgram.SetVertexAttrib<Tv::TexCoordDim, Tv::TexCoordType::value_type>
					("iTexCoord", reinterpret_cast<void*>(Tv::TexCoordOffset), false, sizeof(Tv));
			}
			if constexpr (Tv::HasNormal)
			{
				ShaderProgram.SetVertexAttrib<Tv::NormalDim, Tv::NormalType::value_type>
					("iNormal", reinterpret_cast<void*>(Tv::NormalOffset), false, sizeof(Tv));
			}
			gl.BindBuffer(gl.ARRAY_BUFFER, 0);
		}

		void DescribeInstanceBuffer(const Program& ShaderProgram)
		{
			gl.BindBuffer(gl.ARRAY_BUFFER, InstancesBuffer);
			gl.BindBuffer(gl.ARRAY_BUFFER, 0);
		}

		void Draw(const Program& ShaderProgram, GLsizei InstanceCount)
		{
			ShaderProgram.Use();

			try
			{
				gl.BindVertexArray(GetAssociatedVAO(ShaderProgram));
			}
			catch (const std::out_of_range&)
			{
				GLuint VAO = 0;
				gl.GenVertexArrays(1, &VAO);
				gl.BindVertexArray(VAO);
				Pipelines[ShaderProgram] = VAO;
				DescribeArrayBuffer(ShaderProgram);
				DescribeInstanceBuffer(ShaderProgram);
			}

			Draw(InstanceCount);
		}
	};

}
