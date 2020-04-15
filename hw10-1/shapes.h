class Shape {
protected:
	double width;
	double height;
public:
	Shape(double w, double h);
	virtual double getArea() = 0;
};

class Triangle : public Shape {
public:
	Triangle(double w, double h);
	virtual double getArea();
};

class Rectangle : public Shape {
public:
	Rectangle(double w = 0, double h = 0);
	virtual double getArea();
};
