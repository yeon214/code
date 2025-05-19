#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		long long n, num = 1;
		int count = 0;
		scanf("%lld", &n);
		for (; n > num; count++)
		{
			num *= 2;
		}
		printf("%d\n", count);
	}
	return 0;
}