#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; 
    int input;

    cout << "정수를 입력하세요(0을 입력하면 종료) >> ";

    while (true) {
        cin >> input;
        if (input == 0)
            break;

        numbers.push_back(input); 

        int sum = 0;
        for (int i = 0; i < numbers.size(); i++) {
            cout << numbers[i] << " ";
            sum += numbers[i];
        }

        double average = (double)sum / numbers.size(); // 평균 계산
        cout << "\n평균 = " << average << endl;

        cout << "정수를 입력하세요(0을 입력하면 종료) >> ";
    }

    return 0;
}
