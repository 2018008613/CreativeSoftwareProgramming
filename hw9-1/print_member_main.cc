#include <iostream>
#include <vector>
#include <string>
#include "print_member.h"

using namespace std;

int main() {
	vector<A* > v;
	int a;
	double b;
	string c;
	cin >> a >> b >> c;
	v.push_back(new A(a));
	v.push_back(new B(b));
	v.push_back(new C(c));
	for (A *object : v) object->print();

	for (A *object : v) delete object;
}

