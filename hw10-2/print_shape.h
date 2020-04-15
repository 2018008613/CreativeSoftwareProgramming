#include <iostream>
#define PI 3.141592
class Shape {
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual std::string getTypeString() = 0;
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r);
	virtual double getArea();
	virtual double getPerimeter();
	virtual std::string getTypeString();
};

class  Rectangle : public Shape {
private:
	double height;
	double width;
public:
	Rectangle(double h, double w);
	virtual double getArea();
	virtual double getPerimeter();
	virtual std::string getTypeString();
};
