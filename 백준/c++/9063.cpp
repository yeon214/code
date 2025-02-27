#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	int number, xMax=-10001, xMin = 10001, yMax = -10001, yMin = 10001, x, y;
	scanf("%d", &number);
	while (number--) {
		cin >> x >> y;
		if (x > xMax) xMax = x;
		if (x < xMin) xMin = x;
		if (y > yMax) yMax = y;
		if (y < yMin) yMin = y;
	}
	printf("%d", (xMax - xMin) * (yMax - yMin));
	return 0;
}