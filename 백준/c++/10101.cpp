#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a == 60 && b == 60 && c == 60) cout << "Equilateral";
	else if (a + b + c == 180) {
		if (a == b || b == c || a == c) cout << "Isosceles";
		else if (a != b && b != c) cout << "Scalene";
	}
	else if (a + b + c != 180) cout << "Error";
	return 0;
}