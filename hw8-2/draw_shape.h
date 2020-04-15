class Shape {
public:
	Shape();
	Shape(int x, int y, char brush);
	double GetArea() {};
	int GetPerimeter() {};
	void Draw(int canvas_width, int canvas_height) {};
protected:
	int _x;
	int _y;
	char _brush;
};

class Square : public Shape {
public:
	Square();
	Square(int x, int y, int width, char brush);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
private:
	int _width;
};

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(int x, int y, int height, int width, char brush);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
private:
	int _height;
	int _width;
};

class Diamond : public Shape {
public:
	Diamond();
	Diamond(int x, int y, int dist, char brush);
	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);
private:
	int _dist;
};
