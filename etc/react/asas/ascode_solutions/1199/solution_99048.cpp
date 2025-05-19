#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int a, int b)
{
	int result = a + b;
	return result;
}
int sub(int a, int b)
{
	int result = a - b;
	return result;
}
int multi(int a, int b)
{
	int result = a * b;
	return result;
}
double share(int a, int b)
{
	double result = a / (double)b;
	return result;
}
int rest(int a, int b)
{
	int result = a % b;
	return result;
}
int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b;
		char c;
		scanf("%d %c %d", &a, &c, &b);
		if (b == 0)
		{
			if (c == '+')
			{
				printf("%d\n", add(a, b));
			}
			else if (c == '-')
			{
				printf("%d\n", sub(a, b));
			}
			else if (c == 'x')
			{
				printf("%d\n", multi(a, b));
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
				printf("%d\n", add(a,b));
			}
			else if (c == '-')
			{
				printf("%d\n", sub(a, b));
			}
			else if (c == 'x')
			{
				printf("%d\n", multi(a, b));
			}
			else if (c == '/')
			{
				printf("%.5lf\n", share(a, b));
			}
			else if (c == '%')
			{
				printf("%d\n", rest(a, b));
			}
			else
			{
				printf("Mission Impossible\n");
			}
		}
	}
	return 0;
}
