#include <iostream>
class Animal {
protected:
	std::string name;
	int age;
public:
	Animal(std::string n, int a);
	virtual void printInfo();
};

class Zebra : public Animal {
private:
	int numStripes;
public:
	Zebra(std::string n, int a, int S);
	virtual void printInfo();
};

class Cat : public Animal {
private:
	std::string favoriteToy;
public:
	Cat(std::string n, int a, std::string f);
	virtual void printInfo();
};
