//y = bigger(waffle, pizza); 에서 오류가 발생합니다.
// bigger() 함수는 템플릿 함수로, a > b를 사용하지만 Circle 클래스에는 > 연산자가 정의되어 있지 않기 때문에 비교 연산을 수행할 수 없어 컴파일 오류가 발생합니다.

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
    cout << "20과 50중 큰 값은 " << c << endl;
    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza);
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;

    return 0;
}
