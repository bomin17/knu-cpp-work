//Ch. 3 - 6
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Random {
public:
	int next();
	int nextInRange(int a, int b);
};


int Random::next() {
	int num;
	do {
		num = rand();

	} while (num % 2 == 1);
	return num;
}

int Random::nextInRange(int a, int b) {
	int number;
	do {
		number = rand() % (b - a + 1) + a;

	} while (number % 2 == 1);
	return number;
}

int main() {
	srand((unsigned)time(0));

	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << "\n";
	for (int i = 0;i < 10;i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << "\n" << "\n" << "-- 2에서 " << "10까지의 랜덤 정수 10 개 --" << "\n";
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << "\n";
}