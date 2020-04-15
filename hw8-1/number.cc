#include "number.h"

Number::Number() { _num = 0; };

Number::Number(int num) { _num = num; };

void Number::setNumber(int num)
{
	_num = num;
}

int Number::getNumber()
{
	return _num;
}

int Square::getSquare()
{
	return _num * _num;
}

int Cube::getCube()
{
	return _num * _num * _num;
}
