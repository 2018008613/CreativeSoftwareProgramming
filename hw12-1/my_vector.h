#include <stdlib.h>

template <class T>
class MyContainer {
public:
	MyContainer()
	{
		obj_arr = nullptr;
		n_elements = 0;
	}
	MyContainer(int n)
	{
		obj_arr = new T[n];
		n_elements = 0;
	}
	~MyContainer()
	{
		delete[] obj_arr;
	}
	void clear()
	{
		n_elements = 0;
	}
	int size() const
	{
		return n_elements;
	}
protected:
	T* obj_arr;
	int n_elements;
};

template <class T>
class MyVector : public MyContainer<T> {
public:
	MyVector() : MyContainer<T>()
	{
		capacity = 0;
	}
	MyVector(int n) : MyContainer<T>(n)
	{
		capacity = n;
	}
	MyVector<T>& operator= (const MyVector<T>& rhs)
	{
		this->n_elements = rhs.n_elements;
		if (capacity != 0)
			delete[] this->obj_arr;
		this->capacity = rhs.capacity;
		this->obj_arr = new T[capacity];
		for (int i = 0;i < this->n_elements;i++)
			this->obj_arr[i] = rhs.obj_arr[i];
		return *this;
	}
	bool empty() const
	{
		if (this->n_elements == 0)
			return true;
		else
			return false;
	}
	int max_size() const
	{
		return this->capacity;
	}
	void reserve(int new_cap)
	{
		T* a = new T[this->n_elements];
		for (int i = 0;i < this->n_elements;i++)
			a[i] = this->obj_arr[i];
		if (this->capacity != 0)
			delete[] this->obj_arr;
		this->obj_arr = new T[new_cap];
		this->capacity = new_cap;
		for (int i = 0;i < this->capacity;i++)
			this->obj_arr[i] = a[i];
		delete[] a;
	}
	void push_back(T obj)
	{
		int a;
		if (2 * this->capacity >= 1)
			a = 2 * this->capacity;
		else
			a = 1;
		if (this->capacity == this->n_elements)
			reserve(a);
		this->obj_arr[this->n_elements] = obj;
		this->n_elements++;
	}
	void pop_back()
	{
		this->n_elements--;
	}
	T& front()
	{
		return this->obj_arr[0];
	}
	T& back()
	{
		return this->obj_arr[this->n_elements - 1];
	}
	T& at(const int idx)
	{
		return this->obj_arr[idx];
	}
	const T& at(const int idx) const
	{
		return this->obj_arr[idx];
	}
	T& operator[] (const int idx)
	{
		return this->obj_arr[idx];
	}
	const T& operator[] (const int idx) const
	{
		return this->obj_arr[idx];
	}
	MyVector<T> operator+(const MyVector<T>& rhs)
	{
		MyVector a;
		a.capacity = this->capacity + rhs.capacity;
		a.obj_arr = new T[a.capacity];
		a.n_elements = this->n_elements + rhs.n_elements;
		for (int i = 0;i < this->n_elements;i++)
			a.obj_arr[i] = this->obj_arr[i];
		for (int i = this->n_elements;i < a.n_elements;i++)
			a.obj_arr[i] = rhs.obj_arr[i - this->n_elements];
		return a;
	}
private:
	int capacity;
};
