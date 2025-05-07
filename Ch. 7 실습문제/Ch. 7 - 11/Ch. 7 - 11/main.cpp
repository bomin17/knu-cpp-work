//Ch. 7 - 11
#include <iostream>
#include <string>
using namespace std;

class Stack {
	int arr[100]; 
	int idx;      
public:
	Stack() {
		idx = -1; 
	}
	bool operator!() {
		if (idx == -1) return true;
		else return false;
	}
	Stack& operator<<(int val) {
		idx++;
		arr[idx] = val;
		return *this;
	}
	Stack& operator>>(int& val) {
		val = arr[idx];
		idx--;
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}
