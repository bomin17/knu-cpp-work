#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; 
    int input;

    cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >> ";

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

        double average = (double)sum / numbers.size(); // ��� ���
        cout << "\n��� = " << average << endl;

        cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >> ";
    }

    return 0;
}
