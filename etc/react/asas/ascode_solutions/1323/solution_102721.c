#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{ //1323
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, num, count = 1, sum;
		scanf("%d", &n);
		num = n;
		for (;; count++)
		{
			sum = (num / 10 + num % 10) % 10 + (num % 10) * 10;
			if (sum == n) break;
			num = sum;
		}
		printf("#%d: %d\n", i + 1, count);
	}
	return 0;
}