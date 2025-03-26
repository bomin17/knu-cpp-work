//Ch. 3 - 3
#include<iostream>
#include<string>
using namespace std;

class Account {
public:
	int balance = 0, id = 0;
	string name;
	int i = 0, j = 0;
	Account(string n, int i, int b);

	int deposit(int i);
	string getOwner();
	int inquiry();
	int withdraw(int j);
};

Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}


int Account::deposit(int i) {
	balance += i;
	return balance;
}
string Account::getOwner() {
	return name;
}
int Account::withdraw(int j) {
	balance -= j;
	return balance;
}
int Account::inquiry() {
	return balance;
}

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << "\n";
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << "\n";
}