//Ch. 3 - 5
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
	int num = rand();
	return num;
}

int Random::nextInRange(int a, int b) {
	int number = rand() % (b - a + 1) + a;
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
	cout << "\n" << "\n" << "-- 2에서 " << "4까지의 랜덤 정수 10 개 --" << "\n";
	for (int i = 0;i < 10;i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << "\n";
}