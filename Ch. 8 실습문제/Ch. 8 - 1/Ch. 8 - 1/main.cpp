//Ch. 8 - 1
#include <iostream>
#include <string>
using namespace std;

class Circle {
public:
	int radius;
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int radius, string name) : Circle(radius) { this->name = name; }
	void setName(int radius, string name) { setRadius(radius); this->name = name; }
	void show();
};
void NamedCircle::show() {
	cout << "반지름이 " << getRadius() << "인 " << name;
}

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}
