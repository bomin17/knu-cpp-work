#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores;
    int choice;
    int score;
    string name;


    cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****" << endl;

    while (true) {
        cout << "�Է� : 1, ��ȸ : 2, ���� : 3 >> ";
        cin >> choice;

        if (choice == 1) {
            cout << "�̸��� ���� >> ";
            cin >> name >> score;
            scores[name] = score;
        }
        else if (choice == 2) {
            cout << "�̸� >> ";
            cin >> name;
            if (scores.find(name) != scores.end()) {
                cout << name << "�� ������ " << scores[name] << endl;
            }
            else {
                cout << "ã�� �� �����ϴ�." << endl;
            }
        }
        else if (choice == 3) {
            cout << "�����մϴ�.." << endl;
            break;
        }
    }

    return 0;
}


