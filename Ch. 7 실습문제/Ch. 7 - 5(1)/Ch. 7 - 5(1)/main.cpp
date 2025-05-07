//Ch. 7 - 5(1)
#include <iostream>
#include <string>

using namespace std;

class Color {
	int red;
	int green;
	int blue;
public:
	Color() :Color(0, 0, 0) {}
	Color(int r, int g, int b) {
		this->red = r; 
		this->green = g; 
		this->blue = b;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}

	Color operator +(Color a) {
		Color tmp;
		tmp.red = this->red + a.red;
		tmp.green = this->green + a.green;
		tmp.blue = this->blue + a.blue;
		return tmp;
	}
	bool operator ==(Color b) {
		if (this->red == b.red && this->green == b.green && this->blue == b.blue) return true;
		else return false;
	}
};

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