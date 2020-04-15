#include "my_string.h"
#include <cstring>

using namespace std;

MyString::MyString()
{
	len = 0;
	a = nullptr;
}
MyString::MyString(MyString& my_string)
{
	len = my_string.len;
	a = new char[len + 1];
	for (int i = 0;i < len + 1;i++)
		a[i] = my_string.a[i];
}
MyString::~MyString()
{
	if (a != nullptr)
		delete[] a;
}
MyString& MyString::operator=(const MyString& b)
{
	if (a != nullptr)
		delete[] a;
	len = b.len;
	a = new char[len + 1];
	for (int i = 0;i < len + 1;i++)
		a[i] = b.a[i];
	return *(this);
}
MyString MyString::operator+(const MyString& b)
{
	MyString v;
	v.len = len + b.len;
	v.a = new char[v.len + 1];
	for (int i = 0;i < len;i++)
		v.a[i] = a[i];
	for (int i = len;i < v.len + 1;i++)
		v.a[i] = b.a[i-len];
	return v;
}
MyString MyString::operator*(const int b)
{
	MyString v;
	v.len = len * b;
	v.a = new char[v.len + 1];
	for (int j = 0;j < b;j++)
	{
		for (int i = 0;i < len;i++)
			v.a[i+j*len] = a[i];
	}
	v.a[v.len + 1] = a[len + 1];
	return v;
}
ostream& operator<< (ostream& out, MyString& my_string)
{
	for (int i = 0;i < my_string.len;i++)
		out << my_string.a[i];
	out << endl;
	return out;
}
istream& operator>> (istream& in, MyString& my_string)
{
	char c[51] = "";
	in >> c;
	my_string.len = strlen(c);
	my_string.a = new char[my_string.len + 1];
	for (int i = 0;i < my_string.len + 1;i++)
		my_string.a[i] = c[i];
	return in;
}
