#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    int year;
    string name;
    string author;

public:
    Book(int year, string name, string author) {
        this->year = year;
        this->name = name;
        this->author = author;
    }

    int getYear() { return year; }
    string getName() { return name; }
    string getAuthor() { return author; }

    void show() {
        cout << year << "년도, " << name << ", " << author << endl;
    }
};

int main() {
    vector<Book> v; 
    int year;
    string name, author;

    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 종료합니다.\n";

    while (true) {

        cout << "년도 >> ";
        cin >> year;
        if (year == -1)
            break;
        cin.ignore(); 
        cout << "책 이름 >> ";
        getline(cin, name);
        cout << "저자 >> ";
        getline(cin, author);

        v.push_back(Book(year, name, author));

    }

    cout << "총 입고된 책은 " << v.size() << "권입니다.\n";

    string searchAuthor;
    cin.ignore(); 
    cout << "검색하고자 하는 저자 이름을 입력하세요 >> ";
    getline(cin, searchAuthor);


    for (int i = 0; i < v.size(); i++) {
        if (v[i].getAuthor() == searchAuthor) {
            v[i].show();
        }
    }

    int searchYear;
    cout << "검색하고자 하는 년도를 입력하세요 >> ";
    cin >> searchYear;

    for (int i = 0; i < v.size(); i++) {
        if (v[i].getYear() == searchYear) {
            v[i].show();
        }
    }

    return 0;
}
