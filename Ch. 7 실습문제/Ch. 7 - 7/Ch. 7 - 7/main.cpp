//Ch. 7 - 7(1)
#include <iostream>
#include <string>
using namespace std;

class Matrix {
	int m[4]; 

public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		m[0] = a;
		m[1] = b;
		m[2] = c;
		m[3] = d;
	}

	Matrix operator>>(int arr[]) {
		for (int i = 0; i < 4; i++) {
			arr[i] = m[i];
		}
		return *this; 
	}

	Matrix& operator<<(int arr[]) {
		for (int i = 0; i < 4; i++) {
			m[i] = arr[i];
		}
		return *this;
	}

	void show() {
		cout << "Matrix = {" << m[0] << ' ' << m[1] << ' ' << m[2] << ' ' << m[3] << "} \n";
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();

	return 0;
}