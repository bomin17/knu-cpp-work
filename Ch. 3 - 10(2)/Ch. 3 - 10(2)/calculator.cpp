//Ch. 3 - 10(2)
#include<iostream>
#include<string>
#include "calculator.h"
using namespace std;


void Add::setValue(int i, int j) {
	a = i;
	b = j;
}
int Add::calculate() {
	return a + b;
}


void Sub::setValue(int i, int j) {
	a = i;
	b = j;
}
int Sub::calculate() {
	return a - b;
}


void Mul::setValue(int i, int j) {
	a = i;
	b = j;
}
int Mul::calculate() {
	return a * b;
}


void Div::setValue(int i, int j) {
	a = i;
	b = j;
}
int Div::calculate() {
	return a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (1) {
		int i, j;
		char o;
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> i >> j >> o;

		if (o == '+') {
			a.setValue(i, j);
			cout << a.calculate() << "\n";
		}
		else if (o == '-') {
			s.setValue(i, j);
			cout << s.calculate() << "\n";
		}
		else if (o == '*') {
			m.setValue(i, j);
			cout << m.calculate() << "\n";
		}
		else if (o == '/') {
			d.setValue(i, j);
			cout << d.calculate() << "\n";
		}
	}
}