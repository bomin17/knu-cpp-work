//Ch. 3 - 1
#include<iostream>
using namespace std;

class Tower {
public:
	int height;
	Tower();
	Tower(int length);
	int getHeight();
};
Tower::Tower() {
	height = 1;
}
Tower::Tower(int length) {
	height = length;
}
int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << "\n";
	cout << "���̴� " << seoulTower.getHeight() << "����" << "\n";
}