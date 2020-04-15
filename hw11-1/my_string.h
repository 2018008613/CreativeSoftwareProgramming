#include <iostream>

class MyString
{
private:
	int len;
	char* a;
public:
	MyString();
	MyString(MyString& my_string);
	~MyString();
	MyString& operator=(const MyString& b);
	MyString operator+(const MyString& b);
	MyString operator*(const int b);
	friend std::ostream& operator<< (std::ostream& out, MyString& my_string);
	friend std::istream& operator>> (std::istream& in, MyString& my_string);
};
