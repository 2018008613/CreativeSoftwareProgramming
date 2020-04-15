class Canvas {
public:
	Canvas(const size_t row, const size_t col);
	~Canvas();
	void Resize(const size_t row, const size_t col);
	bool DrawPixel(const int x, const int y, const char brush);
	void Print() const;
	void Clear();
private:
	char** c;
	int _row;
	int _col;
};
class Shape {
public:
	Shape(int x, int y, char brush);
	virtual void Draw(Canvas* canvas) const {};
	virtual void printInfo() const {};
protected:
	char _brush;
	int _x;
	int _y;
};
class Rectangle : public Shape {
private:
	int _width;
	int _height;
public:
	Rectangle(int x, int y, int height, int width, char brush);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
};
class UpTriangle : public Shape { 
private:
	int _height;
public:
	UpTriangle(int x, int y, int height, char brush);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
};
class DownTriangle : public Shape {
private:
	int _height;
public:
	DownTriangle(int x, int y, int height, char brush);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
};
class Diamond : public Shape {
private:
	int _height;
public:
	Diamond(int x, int y, int height, char brush);
	virtual void Draw(Canvas* canvas) const;
	virtual void printInfo() const;
};
