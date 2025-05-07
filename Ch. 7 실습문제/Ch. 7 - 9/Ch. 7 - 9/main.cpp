//Ch. 7 - 9
#include <iostream>
#include <string>
using namespace std;

class Circle;
Circle operator+(int x, Circle c); 

class Circle {
	int r; 
public:
	Circle(int rr = 0) {
		r = rr; 
	}
	void show() {
		cout << "radius = " << r << " ÀÎ ¿ø" << endl;
	}
	friend Circle operator+(int x, Circle c);
};

Circle operator+(int x, Circle c) {
	Circle temp;
	temp.r = x + c.r;
	return temp;
}

int main() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();

	return 0;
}
