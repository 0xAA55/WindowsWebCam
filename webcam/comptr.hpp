#pragma once

// 古代的丑东西的封装
template <typename T>
struct COMPtr
{
protected:
	T* p = nullptr;

public:
	COMPtr() = default;
	COMPtr(const COMPtr& c) = delete;

	void reset() { if (p) { p->Release(); p = nullptr; } }

	COMPtr(T* p) : p(p) {}
	~COMPtr() { reset(); }

	// 真的丑，yue
	T& operator *() { return *p; }
	T* operator ->() { return p; }
	T** operator &() { return &p; }
	T* get() { return p; }
	const T* get() const { return p; }
	operator T* () const { return p; }

	T*& operator =(T* other)
	{ // 一不小心，内存泄露，双重释放
		reset();
		p = other;
		return p;
	}
};
