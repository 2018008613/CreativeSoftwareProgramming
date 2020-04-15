#include "my_vector.h"
#include <cstdlib>

using namespace std;

MyVector::MyVector()
{
	max_num = 0;
	a = nullptr;
}
MyVector::MyVector(int max_num)
{
	this -> max_num = max_num;
	a = new double[max_num];
}
MyVector::~MyVector()
{
	if(a != nullptr)
		delete[] a;
}
MyVector & MyVector::operator=(const MyVector & b)
{
	if (a != nullptr)
		delete[] a;
	max_num = b.max_num;
	a = new double[max_num];
	for (int i = 0;i < max_num;i++)
		a[i] = b.a[i];
	return *(this);
}
MyVector MyVector::operator+(const MyVector & b)
{
	MyVector v(max_num);
	for (int i = 0;i < max_num;i++)
		v.a[i] = a[i] + b.a[i];
	return v;
}
MyVector MyVector::operator-(const MyVector & b)
{
	MyVector v(max_num);
	for (int i = 0;i < max_num;i++)
		v.a[i] = a[i] - b.a[i];
	return v;
}
MyVector MyVector::operator+(const int b)
{
	MyVector v(max_num);
	for (int i = 0;i < max_num;i++)
		v.a[i] = a[i] + b;
	return v;
}
MyVector MyVector::operator-(const int b)
{
	MyVector v(max_num);
	for (int i = 0;i < max_num;i++)
		v.a[i] = a[i] - b;
	return v;
}
ostream& operator << (ostream& out, MyVector & b)
{
	for (int i = 0;i < b.max_num;i++)
	{
		out << b.a[i];
		if (i < b.max_num - 1)
			out << " ";
	}
	out << endl;
	return out;
}
istream& operator >> (istream& in, MyVector & b)
{
	for (int i = 0;i < b.max_num;i++)
		in >> b.a[i];
	return in;
}
