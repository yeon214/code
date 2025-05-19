#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		int day = 0;
		scanf("%d", &n);
		for (; n != 1; day++)
		{
			if (n % 2 == 0) n /= 2;
			else n = 3 * n + 1;
		}
		printf("%d\n", day);
	}

	return 0;
}