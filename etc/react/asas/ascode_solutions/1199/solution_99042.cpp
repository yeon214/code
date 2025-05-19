#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b;
		char c;
		scanf("%d %c %d", &a, &c, &b);
		if (b==0)
		{
			if (c == '+')
			{
				printf("%d\n", a + b);
			}
			else if (c == '-')
			{
				printf("%d\n", a - b);
			}
			else if (c == 'x')
			{
				printf("%d\n", a * b);
			}
			else
			{
				printf("Mission Impossible\n");
			}
		}
		else
		{
			if (c == '+')
			{
				printf("%d\n", a + b);
			}
			else if (c == '-')
			{
				printf("%d\n", a - b);
			}
			else if (c == 'x')
			{
				printf("%d\n", a * b);
			}
			else if (c == '/')
			{
				printf("%.5lf\n", a / (double)b);
			}
			else if (c == '%')
			{
				printf("%d\n", a % b);
			}
			else
			{
				printf("Mission Impossible\n");
			}
		}
	}
	return 0;
}