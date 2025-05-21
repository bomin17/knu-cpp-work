#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
public:
    Printer(string m = "", string manu = "", int count = 0) {
        model = m;
        manufacturer = manu;
        availableCount = count;
        printedCount = 0;
    }

    virtual void print(int pages) = 0;
    virtual void show() = 0;
};

class InkJetPrinter : public Printer {
    int availableInk;
public:
    InkJetPrinter(string m, string manu, int paper, int inkAmount) : Printer(m, manu, paper) {
        availableInk = inkAmount;
    }

    void print(int pages) {
        if (availableCount < pages) {
            cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
        }
        else if (availableInk < pages) {
            cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
        }
        else {
            availableCount -= pages;
            availableInk -= pages;
            printedCount += pages;
            cout << "����Ʈ�Ͽ����ϴ�." << endl;
        }
    }

    void show() {
        cout << model << ", " << manufacturer << ", ���� ���� " << availableCount << "��, ���� ��ũ " << availableInk << endl;
    }
};

class LaserPrinter : public Printer {
    int toner;
public:
    LaserPrinter(string m, string manu, int paper, int tonerAmount) : Printer(m, manu, paper) {
        toner = tonerAmount;
    }

    void print(int pages) {
        if (availableCount < pages) {
            cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
        }
        else if (toner < pages) {
            cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
        }
        else {
            availableCount -= pages;
            toner -= pages;
            printedCount += pages;
            cout << "����Ʈ�Ͽ����ϴ�." << endl;
        }
    }

    void show() {
        cout << model << ", " << manufacturer << ", ���� ���� " << availableCount << "��, ���� ��� " << toner << endl;
    }
};

int main() {
    InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

    cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
    cout << "��ũ�� : ";
    ink->show();
    cout << "������ : ";
    laser->show();

    int select, pages;
    char answer;

    while (true) {
        cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է� >> ";
        cin >> select >> pages;

        if (select == 1) {
            ink->print(pages);
        }
        else if (select == 2) {
            laser->print(pages);
        }
        else {
            cout << "�߸� �Է��Ͽ����ϴ�." << endl;
            continue;
        }

        ink->show();
        laser->show();

        cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n) >> ";
        cin >> answer;
        if (answer == 'n') {
            break;
        }
    }

    delete ink;
    delete laser;

    return 0;
}
