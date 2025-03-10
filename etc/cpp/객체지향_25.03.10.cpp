#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
void P9();
int dist_2d(int x1, int y1, int x2, int y2);
void P10();
void quad_eqn(double a, double b, double c);
int main(void) {
	P9();
	P10();
	return 0;
}
void P9() {
	int x1, y1, x2, y2;
	cout << "두 점 사이의 거리를 계산하겠습니다.\n";
	cout << "x1, y1, x2, y2를 순서대로 입력해주세요.\n";
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "결과 : " << dist_2d(x1, y1, x2, y2) << "\n";
}
int dist_2d(int x1, int y1, int x2, int y2) {
	return sqrt(pow(max(x1, x2) - min(x1, x2), 2) + pow(max(y1, y2) - min(y1, y2), 2));
}
void P10() {
	double a, b, c;
	cout << "2차 방정식의 계수를 입력하시오. \n";
	cout << "a : ", cin >> a;
	cout << "b : ", cin >> b;
	cout << "c : ", cin >> c;
	quad_eqn(a, b, c);
}
void quad_eqn(double a, double b, double c) {
	if (b * b - 4 * a * c < 0) cout << "근이 존재하지 않습니다.\n";
	else if (b * b - 4 * a * c == 0) cout << "결과 : " << -b / 2 * a << "\n";
	else cout << "결과 : " << (-b - sqrt(b * b - 4 * a * c)) / 2 * a << " , " << (-b + sqrt(b * b - 4 * a * c)) / 2 * a << "\n";
}