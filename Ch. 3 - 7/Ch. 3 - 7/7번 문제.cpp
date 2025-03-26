//Ch. 3 - 7
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class SelectableRandom {
public:
	int even();
	int odd();
	int evenInRange(int a, int b);
	int oddInRange(int a, int b);
};


int SelectableRandom::even() {
	int num;
	do {
		num = rand();

	} while (num % 2 == 1);
	return num;
}

int SelectableRandom::odd() {
	int num;
	do {
		num = rand();

	} while (num % 2 == 0);
	return num;
}

int SelectableRandom::evenInRange(int a, int b) {
	int number;
	do {
		number = rand() % (b - a + 1) + a;

	} while (number % 2 == 1);
	return number;
}

int SelectableRandom::oddInRange(int a, int b) {
	int number;
	do {
		number = rand() % (b - a + 1) + a;

	} while (number % 2 == 0);
	return number;
}

int main() {
	srand((unsigned)time(0));

	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << "\n";
	for (int i = 0;i < 10;i++) {
		int n = r.even();
		cout << n << ' ';
	}
	cout << "\n" << "\n" << "-- 2���� " << "9������ ���� Ȧ�� ���� 10 �� --" << "\n";
	for (int i = 0;i < 10;i++) {
		int n = r.oddInRange(2, 9);
		cout << n << ' ';
	}
	cout << "\n";
}