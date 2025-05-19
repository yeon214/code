#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int k, l, m, n, d, count = 0;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	for (int i = 1; i <= d; i++)
	{
		if (i % k == 0)
		{
			count++;
		}
	}
	for (int i = 1; i <= d; i++)
	{
		if ((i % k != 0)&&(i%l==0))
		{
			count++;
		}
	}
	for (int i = 1; i <= d; i++)
	{
		if ((i % k != 0) && (i % l != 0) && (i%m==0))
		{
			count++;
		}
	}
	for (int i = 1; i <= d; i++)
	{
		if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i%n==0))
		{
			count++;
		}
	}
	printf("%d", count);
    return 0;
}