//y = bigger(waffle, pizza); ���� ������ �߻��մϴ�.
// bigger() �Լ��� ���ø� �Լ���, a > b�� ��������� Circle Ŭ�������� > �����ڰ� ���ǵǾ� ���� �ʱ� ������ �� ������ ������ �� ���� ������ ������ �߻��մϴ�.

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
};

Circle bigger(Circle a, Circle b) {
    if (a.getRadius() > b.getRadius()) return a;
    else return b;
}

template <class T>
T bigger(T a, T b) {
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20�� 50�� ū ���� " << c << endl;
    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza);
    cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;

    return 0;
}
