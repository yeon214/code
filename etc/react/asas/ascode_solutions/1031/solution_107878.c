#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc;
	long long n;
	scanf("%d", &tc);
	while (tc--)
	{
		long long change = 1, count = 0;
		scanf("%lld", &n);
		for (; change < n; count++)
		{
			change *= 2;
		}
		printf("%d\n", count);
	}
	return 0;
}