#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle(int radius, string name) {
        this->radius = radius;
        this->name = name;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
    string getName() {
        return name;
    }
};

int main() {
    vector<Circle*> v;
    int choice;

    cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;

    while (true) {
        cout << "����: 1, ����: 2, ��κ���: 3, ����: 4 >> ";
        cin >> choice;

        if (choice == 1) {
            int r;
            string n;
            cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
            cin >> r >> n;
            v.push_back(new Circle(r, n));  
        }
        else if (choice == 2) {
            string delName;
            cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
            cin >> delName;
            for (auto it = v.begin(); it != v.end(); ) {
                if ((*it)->getName() == delName) {
                    delete* it;             
                    it = v.erase(it);      
                }
                else {
                    ++it;
                }
            }
        }
        else if (choice == 3) {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i]->getName() << endl;
            }
        }
        else if (choice == 4) {
            break;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        delete v[i];
    }

    return 0;
}
