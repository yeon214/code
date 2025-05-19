#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b, count = 0, check = 0;
		scanf("%d %d", &a, &b);
		for (int j = a; j <= b; j++)
		{
			if (j >= 2)
			{
				check = 0;
				for (int p = 2; p <= sqrt(j); p++)
				{
					if (j % p == 0)
					{
						check++;
						break;
					}
				}
				if (check == 0)
				{
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}