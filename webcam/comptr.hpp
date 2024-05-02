#pragma once

// �Ŵ��ĳ����ķ�װ
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

	// ��ĳ�yue
	T& operator *() { return *p; }
	T* operator ->() { return p; }
	T** operator &() { return &p; }
	T* get() { return p; }
	const T* get() const { return p; }
	operator T* () const { return p; }

	T*& operator =(T* other)
	{ // һ��С�ģ��ڴ�й¶��˫���ͷ�
		reset();
		p = other;
		return p;
	}
};
