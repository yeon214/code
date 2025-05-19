#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, h;
	double sum;
	scanf("dside : %d, uside : %d, height : %d", &x, &y, &h);
	sum = (x + y) * h * 0.5;
	printf("%.1lf\n", sum);
}