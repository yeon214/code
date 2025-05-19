#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, count = 0;
		scanf("%d", &n);
		for (; n > 0; count++)
		{
			if (count % 7 < 5)
			{
				n -= 40000;
			}
			else
			{
				n -= 80000;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}