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
            cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        }
        else if (availableInk < pages) {
            cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
        }
        else {
            availableCount -= pages;
            availableInk -= pages;
            printedCount += pages;
            cout << "프린트하였습니다." << endl;
        }
    }

    void show() {
        cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount << "장, 남은 잉크 " << availableInk << endl;
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
            cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        }
        else if (toner < pages) {
            cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
        }
        else {
            availableCount -= pages;
            toner -= pages;
            printedCount += pages;
            cout << "프린트하였습니다." << endl;
        }
    }

    void show() {
        cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount << "장, 남은 토너 " << toner << endl;
    }
};

int main() {
    InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
    cout << "잉크젯 : ";
    ink->show();
    cout << "레이저 : ";
    laser->show();

    int select, pages;
    char answer;

    while (true) {
        cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력 >> ";
        cin >> select >> pages;

        if (select == 1) {
            ink->print(pages);
        }
        else if (select == 2) {
            laser->print(pages);
        }
        else {
            cout << "잘못 입력하였습니다." << endl;
            continue;
        }

        ink->show();
        laser->show();

        cout << "계속 프린트 하시겠습니까(y/n) >> ";
        cin >> answer;
        if (answer == 'n') {
            break;
        }
    }

    delete ink;
    delete laser;

    return 0;
}
