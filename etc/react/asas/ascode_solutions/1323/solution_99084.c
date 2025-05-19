#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int n, cycle = 1;
		scanf("%d", &n);
		int change = n;
		for (;; cycle++)
		{
			int num = change;
			if (change < 10)
			{
				change = change + change * 10;
			}
			else if (change >= 10)
			{
				change = change / 10 + change % 10;
				if (change >= 10)
				{
					change %= 10;
				}
				change =(num % 10) * 10 + change;
			}
			if (n == change)
			{
				printf("#%d: %d\n", i, cycle);
				break;
			}
		}
	}
	return 0;
}