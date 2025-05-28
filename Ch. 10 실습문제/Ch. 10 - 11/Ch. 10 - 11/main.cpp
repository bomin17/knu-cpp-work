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
        cout << year << "�⵵, " << name << ", " << author << endl;
    }
};

int main() {
    vector<Book> v; 
    int year;
    string name, author;

    cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �����մϴ�.\n";

    while (true) {

        cout << "�⵵ >> ";
        cin >> year;
        if (year == -1)
            break;
        cin.ignore(); 
        cout << "å �̸� >> ";
        getline(cin, name);
        cout << "���� >> ";
        getline(cin, author);

        v.push_back(Book(year, name, author));

    }

    cout << "�� �԰�� å�� " << v.size() << "���Դϴ�.\n";

    string searchAuthor;
    cin.ignore(); 
    cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ��� >> ";
    getline(cin, searchAuthor);


    for (int i = 0; i < v.size(); i++) {
        if (v[i].getAuthor() == searchAuthor) {
            v[i].show();
        }
    }

    int searchYear;
    cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ��� >> ";
    cin >> searchYear;

    for (int i = 0; i < v.size(); i++) {
        if (v[i].getYear() == searchYear) {
            v[i].show();
        }
    }

    return 0;
}
