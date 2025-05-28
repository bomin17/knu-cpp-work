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

    cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;

    while (true) {
        cout << "삽입: 1, 삭제: 2, 모두보기: 3, 종료: 4 >> ";
        cin >> choice;

        if (choice == 1) {
            int r;
            string n;
            cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
            cin >> r >> n;
            v.push_back(new Circle(r, n));  
        }
        else if (choice == 2) {
            string delName;
            cout << "삭제하고자 하는 원의 이름은 >> ";
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
