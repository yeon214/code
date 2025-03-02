#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int a[3];
	while (1) {
		cin >> a[0] >> a[1] >> a[2];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;
		sort(a, a + 3);
		if (a[0] + a[1] <= a[2]) cout << "Invalid\n";
		else if (a[0] == a[1] && a[1] == a[2]) cout << "Equilateral\n";
		else if (a[0] == a[1] || a[1] == a[2]) cout << "Isosceles\n";
		else if (a[0] != a[1] && a[1] != a[2]) cout << "Scalene\n";
	}
	return 0;
}