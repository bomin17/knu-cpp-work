//Ch. 8 - 3
#include <iostream>
#include <string>
using namespace std;

class Point {
public:
	int x, y;
	void setPoint(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << "(" << x << "," << y << ")"; }
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x, int y, string color) { setPoint(x, y); this->color = color; }
	void setColor(string color) { this->color = color; }
	void show();
};
void ColorPoint::show() {
	cout << color << "색으로 ";
	showPoint();
	cout << "에 위치한 점입니다.";
}

int main() {
	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}
