#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 2 * n - 1 - 2 * i; j > 0; j--)
		{
			printf("@");
		}
		printf("\n");
	}
	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			printf("@");
		}
		printf("\n");
	}

	return 0;
}