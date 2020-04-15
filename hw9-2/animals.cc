#include "animals.h"
#include <string>

using namespace std;

Animal::Animal(string n,int a)
{
	name = n;
	age = a;
}
void Animal::printInfo() {}
Zebra::Zebra(string n, int a, int S) : Animal(n, a)
{
	numStripes = S;
}
void Zebra::printInfo()
{
	cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}
Cat::Cat(string n, int a, string f) : Animal(n, a)
{
	favoriteToy = f;
}
void Cat::printInfo()
{
	cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}
