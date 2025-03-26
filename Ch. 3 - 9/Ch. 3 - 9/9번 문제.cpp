//Ch. 3 - 9
#include<iostream>
using namespace std;

class Oval {
public:
	int width, height;
	Oval();
	Oval(int a, int b);
	~Oval();

	void set(int i, int j);
	void show();
	int getWidth();
	int getHeight();
};

Oval::Oval() {
	width = 1;
	height = 1;
}

Oval::Oval(int a, int b) {
	width = a;
	height = b;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << "\n";
}


void Oval::set(int i, int j) {
	width = i;
	height = j;
}

void Oval::show() {
	cout << "width = " << width << ", height = " << height << "\n";
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << "\n";
}