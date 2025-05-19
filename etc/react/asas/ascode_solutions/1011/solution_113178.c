#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y, z;
	scanf("%lf %lf", &x, &y);
	z = x * y / 2.0;
	printf("%lf, %lf, %lf", x, y, z);

	return 0;
}