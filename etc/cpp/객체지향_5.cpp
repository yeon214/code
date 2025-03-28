#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;
class Dice {
public:
    int face;
    int roll() {
        face = (int)(rand() % 6 + 1);
        return face;
    }
    int getFace() { return face; }
};
void p3() {
    Dice D1;
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        D1.roll();
        cout << "주사위의 숫자는 " << D1.getFace() << "입니다." << endl;
    }
}
class Complex {
public:
    double r, i;
    void setComplex(double p6r, double p6i) {
        r = p6r;
        i = p6i;
    }
    void Print() {
        cout << r << " + " << i << "i" << endl;
    }
    void Add(double r1, double r2, double i1, double i2) {
        r = r1 + r2;
        i = i1 + i2;
    }
    void Sub(double r1, double r2, double i1, double i2) {
        r = r1 - r2;
        i = i1 - i2;
    }
};
void p6() {
    double r1, i1, r2, i2;
    Complex c1, c2, c3;
    cout << "1번째 실수부와 허수부를 입력하세요 : ";
    cin >> r1 >> i1;
    cout << "2번째 실수부와 허수부를 입력하세요 : ";
    cin >> r2 >> i2;
    cout << endl;
    cout << "===================================" << endl;
    c1.setComplex(r1, i1);
    cout << "복소수는 : ";
    c1.Print();
    c2.setComplex(r2, i2);
    cout << "복소수는 : ";
    c2.Print();
    c3.Add(r1, r2, i1, i2);
    cout << "합은 : ";
    c3.Print();
    c3.Sub(r1, r2, i1, i2);
    cout << "뺄셈은 : ";
    c3.Print();
    cout << "===================================" << endl;
}
int main() {
    p3();
    p6();
    return 0;
}