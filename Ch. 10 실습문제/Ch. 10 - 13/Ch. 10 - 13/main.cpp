#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;
    int choice;
    int score;
    string name;


    cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다. *****" << endl;

    while (true) {
        cout << "입력 : 1, 조회 : 2, 종료 : 3 >> ";
        cin >> choice;

        if (choice == 1) {
            cout << "이름과 점수 >> ";
            cin >> name >> score;
            scores[name] = score;
        }
        else if (choice == 2) {
            cout << "이름 >> ";
            cin >> name;
            if (scores.find(name) != scores.end()) {
                cout << name << "의 점수는 " << scores[name] << endl;
            }
            else {
                cout << "찾을 수 없습니다." << endl;
            }
        }
        else if (choice == 3) {
            cout << "종료합니다.." << endl;
            break;
        }
    }

    return 0;
}


