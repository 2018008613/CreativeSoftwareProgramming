#include <iostream>

class MyVector
{
private:
	int max_num;
	double* a;
public:
	//Constructor, Destructor
	MyVector();
	MyVector(int max_num);
	~MyVector();
	MyVector & operator=(const MyVector & b);
	MyVector operator+(const MyVector & b);
	MyVector operator-(const MyVector & b);
	MyVector operator+(const int b);
	MyVector operator-(const int b);
	friend std::ostream& operator << (std::ostream& out, MyVector & b);
	friend std::istream& operator >> (std::istream& in, MyVector & b);
};
