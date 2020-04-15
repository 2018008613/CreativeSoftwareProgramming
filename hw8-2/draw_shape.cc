#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include "draw_shape.h"

using namespace std;

Square::Square()
{
	_width = 0;
}
Rectangle::Rectangle()
{
	_width = 0;
	_height = 0;
}
Diamond::Diamond()
{
	_dist = 0;
}
Shape::Shape()
{
	_x = 0;
	_y = 0;
	_brush = ' ';
}

Shape::Shape(int x, int y, char brush)
{
	_x = x;
	_y = y;
	_brush = brush;
}

void Square::Draw(int canvas_width, int canvas_height)
{
	char** c = (char**)malloc(sizeof(char*)*canvas_height);
	for (int i = 0;i < canvas_height;i++)
	{
		c[i] = (char*)malloc(sizeof(char)*canvas_width);
		for (int j = 0;j < canvas_width;j++)
			c[i][j] = '.';
	}
	for (int i = _y;i < canvas_height && i < _y + _width;i++)
	{
		for (int j = _x;j < canvas_width && j < _x + _width;j++)
		{
			c[i][j] = _brush;
		}
	}
	cout << " ";
	for (int i = 0;i < canvas_width;i++)
		cout << i;
	cout << endl;
	for (int i = 0;i < canvas_height;i++)
	{
		cout << i;
		for (int j = 0;j < canvas_width;j++)
			cout << c[i][j];
		cout << endl;
	}
	for (int i = 0;i < canvas_height;i++)
		free(c[i]);
}
void Rectangle::Draw(int canvas_width, int canvas_height)
{
	char** c = (char**)malloc(sizeof(char*)*canvas_height);
	for (int i = 0;i < canvas_height;i++)
	{
		c[i] = (char*)malloc(sizeof(char)*canvas_width);
		for (int j = 0;j < canvas_width;j++)
			c[i][j] = '.';
	}
	for (int i = _y;i < canvas_height && i < _y + _height;i++)
	{
		for (int j = _x;j < canvas_width && j < _x + _width;j++)
		{
			c[i][j] = _brush;
		}
	}
	cout << " ";
	for (int i = 0;i < canvas_width;i++)
		cout << i;
	cout << endl;
	for (int i = 0;i < canvas_height;i++)
	{
		cout << i;
		for (int j = 0;j < canvas_width;j++)
			cout << c[i][j];
		cout << endl;
	}
	for (int i = 0;i < canvas_height;i++)
		free(c[i]);
}
void Diamond::Draw(int canvas_width, int canvas_height)
{
	int y1 = _y + _dist;
	char** c = (char**)malloc(sizeof(char*)*canvas_height);
	for (int i = 0;i < canvas_height;i++)
	{
		c[i] = (char*)malloc(sizeof(char)*canvas_width);
		for (int j = 0;j < canvas_width;j++)
			c[i][j] = '.';
	}
	for (int i = _y;i < canvas_height && i < _y + 2*_dist+1;i++)
	{
		int j = 0;
		if (_x - _dist + abs(y1 - i) >= 0)
			j = _x - _dist + abs(y1 - i);
		for (;j < canvas_width && j <= _x + _dist - abs(y1 - i);j++)
		{
			c[i][j] = _brush;
		}
	}
	cout << " ";
	for (int i = 0;i < canvas_width;i++)
		cout << i;
	cout << endl;
	for (int i = 0;i < canvas_height;i++)
	{
		cout << i;
		for (int j = 0;j < canvas_width;j++)
			cout << c[i][j];
		cout << endl;
	}
	for (int i = 0;i < canvas_height;i++)
		free(c[i]);
}
double Square::GetArea()
{
	return _width * _width;
}
int Square::GetPerimeter()
{
	return _width * 4;
}
Square::Square(int x, int y, int width, char brush) : Shape(x, y, brush)
{
	_width = width;
}
double Rectangle::GetArea()
{
	return _width * _height;
}
int Rectangle::GetPerimeter()
{
	return 2 * (_width + _height);
}
Rectangle::Rectangle(int x, int y, int height, int width, char brush) : Shape(x, y, brush)
{
	_height = height;
	_width = width;
}
double Diamond::GetArea()
{
	return 2 * _dist * _dist + 2 * _dist + 0.5;
}
int Diamond::GetPerimeter()
{
	return 8 * _dist + 8;
}
Diamond::Diamond(int x, int y, int dist, char brush) : Shape(x, y, brush)
{
	_dist = dist;
}
