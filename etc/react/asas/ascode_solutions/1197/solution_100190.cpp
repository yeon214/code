#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b, c, d, x, y, z;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		x = b - a;
		y = c - b;
		z = d - c;
		if (a==b&&b==c&&c==d)
		{
			printf("Others\n");
		}
		else if (b % a == 0 && c % b == 0 && d % c == 0)
		{
			if (b / a == c / b && c / b == d / c)
			{
				printf("GS\n");
			}
		}
		else if (b-a==c-b&&c-b==d-c)
		{
			printf("AS\n");
		}
		else if (y - x == z - y)
		{
			printf("OS\n");
		}
		else
		{
			printf("Others\n");
		}
	}
	return 0;
}