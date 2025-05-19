#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
int main(void){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int x, y;
		scanf("%d %d", &x, &y);
		double scala = sqrt((x * x) + (y * y));
		printf("%.3lf %.3lf\n", x/ scala, y/scala);
	}
	return 0;
}