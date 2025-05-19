#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < 2 * n - 1; k++)
			{
				printf("%%");
			}
			printf("\n");
		}
		for (int j = 0; j < n; j++)
		{
			for (int k = n - 1-j; k > 0; k--)
			{
				printf(" ");
			}
			for (int k = 0; k <= 2 * j; k++)
			{
				printf("%%");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}