#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		printf("Case #%d:\n", i + 1);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = n - 1 - j; k > 0; k--)
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}

	