#include<iostream>
using namespace std;
#include "Box.h"

int main() {
	Box b(10, 2);
	b.draw();
	cout << "\n";
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}