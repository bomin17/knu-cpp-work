//Ch. 3 - 2
#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	int year = 0, month = 0, day = 0;
	int i = 0, j = 0, k = 0;
	Date(string s);
	Date(int y, int m, int d);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(string s) {
	int index;
	i = stoi(s);

	index = s.find('/');
	j = stoi(s.substr(index + 1));

	index = s.find('/', index + 1);
	k = stoi(s.substr(index + 1));
}

Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::show() {
	cout << i << "³â" << j << "¿ù" << k << "ÀÏ" << "\n";
}

int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << "\n";
}