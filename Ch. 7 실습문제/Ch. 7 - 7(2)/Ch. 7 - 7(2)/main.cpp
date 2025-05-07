//Ch. 7 - 7(2)
#include <iostream>
#include <string>
using namespace std;

class Matrix;
void operator>>(Matrix m1, int arr[4]);
Matrix& operator<<(Matrix& m1, int arr[4]);

class Matrix {
	int data[4];

public:
	Matrix() : Matrix(0, 0, 0, 0) {}

	Matrix(int a, int b, int c, int d) {
		data[0] = a;
		data[1] = b;
		data[2] = c;
		data[3] = d;
	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << data[i] << ' ';
		}
		cout << "}" << endl;
	}

	friend void operator>>(Matrix m1, int arr[4]);
	friend Matrix& operator<<(Matrix& m1, int arr[4]);
};

void operator>>(Matrix m1, int arr[4]) {
	for (int i = 0; i < 4; i++) {
		arr[i] = m1.data[i];
	}
}

Matrix& operator<<(Matrix& m1, int arr[4]) {
	for (int i = 0; i < 4; i++) {
		m1.data[i] = arr[i];
	}
	return m1;
}
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