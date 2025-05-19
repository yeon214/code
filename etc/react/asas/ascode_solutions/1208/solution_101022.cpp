#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0)
		{
			printf("No quadratic\n");
		}
		else
		{
			int d = b * b - 4 * a * c;
			if (d > 0)
			{
				double arr[2] = { 0 };
				arr[0] = ( - b + sqrt(d)) / (double)(2 * a);
				arr[1] = ( - b - sqrt(d)) / (double)(2 * a);
				sort(arr, arr + 2);
				printf("%.3lf %.3lf\n", arr[1], arr[0]);
			}
			else if (d == 0)
			{
				printf("%.3lf\n", (- b + sqrt(d)) / (double)(2 * a));
			}
			else
			{
				printf("Imaginary\n");
			}
		}
	}
	return 0;
}