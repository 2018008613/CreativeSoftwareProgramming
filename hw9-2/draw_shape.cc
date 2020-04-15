#include <iostream>
#include "draw_shape.h"
#include <math.h>
#include <stdlib.h>

using namespace std;

Canvas::Canvas(const size_t row, const size_t col)
{
	c = new char*[row];
	_row = row;
	_col = col;
	for (int i = 0;i < _row;i++)
		c[i] = new char[col];
	Clear();
}
Canvas::~Canvas() 
{
	for (int i = 0;i < _row;i++)
		delete[] c[i];
}
void Canvas::Resize(const size_t row, const size_t col)
{
	for (int i = 0;i < _row;i++)
		delete[] c[i];
	c = new char*[row];
	for (int i = 0;i < row;i++)
		c[i] = new char[col];
	_row = row;
        _col = col;
	Clear();
}
bool Canvas::DrawPixel(const int x, const int y, const char brush)
{
	if (x >= _col || y >= _row || x < 0 || y < 0)
		return false;
	else
		c[y][x] = brush;
}
void Canvas::Print() const
{
	cout << " ";
	for (int i = 0;i < _col;i++)
		cout << i%10;
	cout << endl;
	for (int i = 0;i < _row;i++)
	{
		cout << i%10;
		for (int j = 0; j < _col;j++)
			cout << c[i][j];
		cout << endl;
	}
}
void Canvas::Clear()
{
	for (int i = 0;i < _row;i++)
		for (int j = 0;j < _col;j++)
			c[i][j] = '.';
}
Shape::Shape(int x, int y, char brush)
{
	_x = x;
	_y = y;
	_brush = brush;
}
Rectangle::Rectangle(int x, int y, int height, int width, char brush) : Shape(x, y, brush)
{
	_height = height;
	_width = width;
}
void Rectangle::Draw(Canvas* canvas) const
{
	for (int i = _y;i < _y + _height;i++)
		for (int j = _x;j < _x + _width;j++)
			canvas->DrawPixel(j, i,_brush);
}
void Rectangle::printInfo() const
{
	cout << "rect " << _x << " " << _y << " " << _height << " " << _width << " " << _brush << endl;
}
UpTriangle::UpTriangle(int x, int y, int height, char brush) : Shape(x,y,brush)
{
	_height = height;
}
void UpTriangle::Draw(Canvas* canvas) const
{
	for (int i = _y;i < _y + _height;i++)
		for (int j = _x - _height + abs(_y + _height - i);j <=_x + _height - abs(_y + _height - i);j++)
			canvas->DrawPixel(j, i, _brush);
}
void UpTriangle::printInfo() const
{
	cout << "tri_up " << _x << " " << _y << " " << _height << " " << _brush << endl;
}
DownTriangle::DownTriangle(int x, int y, int height, char brush) : Shape(x, y, brush)
{
	_height = height;
}
void DownTriangle::Draw(Canvas* canvas) const
{
	for (int i = _y - _height + 1;i <= _y ;i++)
		for (int j = _x - abs(_y - i);j <= _x + abs(_y - i);j++)
			canvas->DrawPixel(j, i, _brush);
}
void DownTriangle::printInfo() const
{
	cout << "tri_down " << _x << " " << _y << " " << _height << " " << _brush << endl;
}
Diamond::Diamond(int x, int y, int height, char brush) : Shape(x, y, brush)
{
	_height = height;
}
void Diamond::Draw(Canvas* canvas) const
{
	for (int i = _y;i < _y + 2 * _height + 1;i++)
		for (int j = _x - _height + abs(_y + _height - i);j <= _x + _height - abs(_y + _height - i);j++)
			canvas->DrawPixel(j,i, _brush);
}

void Diamond::printInfo() const
{
	cout << "diamond " << _x << " " << _y << " " << _height << " " << _brush << endl;
}
