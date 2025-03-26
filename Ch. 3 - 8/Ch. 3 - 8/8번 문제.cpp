//Ch. 3 - 8
#include<iostream>
#include<string>
using namespace std;

class Integer {
public:
	int n;
	Integer(int num);
	Integer(string s);

	int get();
	void set(int i);
	int isEven();
};

Integer::Integer(int num) {
	n = num;
}
Integer::Integer(string s) {
	n = stoi(s);
}

int Integer::get() {
	return n;
}

void Integer::set(int i) {
	n = i;
}

int Integer::isEven() {
	if (n % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}


int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}