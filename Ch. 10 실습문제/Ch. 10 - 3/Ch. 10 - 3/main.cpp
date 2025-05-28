//Ch. 10 - 3
#include<iostream>
using namespace std;

template < class T >
void reverseArray(T a[], int b)
{
	for (int i = 0; i < b / 2; i++) {
		T tmp = a[i];
		a[i] = a[b - 1 - i];
		a[b - 1 - i] = tmp;
	}
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << ' ';
	}
	return 0;
}