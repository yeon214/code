#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		for (int j = 2; j <= sqrt(a); j++)
		{
			if (a % j == 0 && b % j ==0)
			{
				b /= j;
			}
		}
		for (; b % 2 == 0 || b % 5 == 0;)
		{
			if (b % 2 == 0) b /= 2;
			if (b % 5 == 0) b /= 5;
		}
		if (b == 1) printf("Limited\n");
		else printf("Unlimited\n");
	}
	return 0;
}