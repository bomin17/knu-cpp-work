//Ch. 10 - 1
#include<iostream>
using namespace std;

template < class T >
T biggest(T a[], int b)
{
	T max = a[0];
	for (int i = 1; i < b; i++) {
		if (a[i] > max) { max = a[i]; }
	}
	return max;
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;

	double y[] = { 1.3, 5, 7.6, 9.1 };
	cout << biggest(y, 4) << endl;

	char c[] = { 'a', 'z', 'm', 'k' };
	cout << biggest(c, 4) << endl;

	return 0;
}