#include <iostream>
#include <string>
using namespace std;

class Color;
Color operator +(Color c1, Color c2);
bool operator ==(Color c1, Color c2);

class Color {
	int red;
	int green;
	int blue;
public:
	Color() :Color(0, 0, 0) {}
	Color(int r, int g, int b) {
		this->red = r; this->green = g; this->blue = b;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	friend Color operator +(Color c1, Color c2);
	friend bool operator ==(Color c1, Color c2);
};

Color operator +(Color o1, Color o2) {
	Color tmp;
	tmp.red = o1.red + o2.red;
	tmp.green = o1.green + o2.green;
	tmp.blue = o1.blue + o2.blue;
	return tmp;
}
bool operator ==(Color o1, Color o2) {
	if (o1.red == o2.red && o1.green == o2.green && o1.blue == o2.blue) return true;
	else return false;
}

int main() {

	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;

	return 0;

}