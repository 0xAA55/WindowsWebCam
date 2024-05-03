#pragma once

#include "glfwwrap.hpp"

#include <glm/glm/glm.hpp>

namespace glm
{
	template<typename T, qualifier Q>
	struct vec<0, T, Q>
	{
	public:
		using value_type = T;
		using type = vec<0, T, Q>;
		using bool_type = vec<0, bool, Q>;

		vec(T v) {};

		inline bool operator == (const vec& v) const { return true; }
		inline bool operator != (const vec& v) const { return true; }
	};

	template <typename T> using tvec0 = vec<0, T>;
}

namespace GLRenderer
{
	using namespace GL;
	using namespace glm;

	template<typename T, int Dim>
	class VertexPosition
	{
	public:
		using value_type = T;
		using VecType = vec<Dim, T>;
		VecType Position = VecType(0);
		static constexpr bool HasPosition = (Dim > 0);

		VertexPosition() = default;
		VertexPosition(const VecType& c) : Position(c) {}
	};

	template<typename T, int Dim>
	class VertexTexCoord
	{
	public:
		using value_type = T;
		using VecType = vec<Dim, T>;
		VecType TexCoord = VecType(0);
		static constexpr bool HasTexCoord = (Dim > 0);

		VertexTexCoord() = default;
		VertexTexCoord(const VecType& c) : TexCoord(c) {}
	};

	template<typename T, int Dim>
	class VertexNormal
	{
	public:
		using value_type = T;
		using VecType = vec<Dim, T>;
		VecType Normal = VecType(0);
		static constexpr bool HasNormal = (Dim > 0);

		VertexNormal() = default;
		VertexNormal(const VecType& c) : Normal(c) {}
	};

	template<typename T, int PositionDim, int TexCoordDim, int NormalDim>
	class Vertex :
		public VertexPosition<T, PositionDim>,
		public VertexTexCoord<T, TexCoordDim>,
		public VertexNormal<T, NormalDim>
	{
	public:
		using PositionType = VertexPosition<T, PositionDim>;
		using TexCoordType = VertexTexCoord<T, TexCoordDim>;
		using NormalType = VertexNormal<T, NormalDim>;

		Vertex (const PositionType& Position) :
			VertexPosition<T, PositionDim>(Position)
		{
		}

		Vertex
		(
			const PositionType& Position,
			const TexCoordType& TexCoord
		) :
			VertexPosition<T, PositionDim>(Position),
			VertexTexCoord<T, TexCoordDim>(TexCoord)
		{
		}

		Vertex
		(
			const PositionType& Position,
			const TexCoordType& TexCoord,
			const NormalType& Normal
		) :
			VertexPosition<T, PositionDim>(Position),
			VertexTexCoord<T, TexCoordDim>(TexCoord),
			VertexNormal<T, NormalDim>(Normal)
		{
		}

		static constexpr size_t PositionOffset = 0;
		static constexpr size_t PositionSize = sizeof(T) * PositionDim;
		static constexpr size_t TexCoordOffset = PositionSize;
		static constexpr size_t TexCoordSize = sizeof(T) * TexCoordDim;
		static constexpr size_t NormalOffset = PositionSize + TexCoordSize;
		static constexpr size_t NormalSize = sizeof(T) * NormalDim;
		static constexpr int PositionDim = PositionDim;
		static constexpr int TexCoordDim = TexCoordDim;
		static constexpr int NormalDim = NormalDim;
	};
}
