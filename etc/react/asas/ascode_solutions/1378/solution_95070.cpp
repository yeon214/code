#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int t, c = 65;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			for (int k = n - 1 - j; k > 0; k--)
			{
				printf(" ");
			}
			for (int k = 0; k <= j; k++)
			{
				printf("%c", c + k);
			}
			for (int k = 0; k < j; k++)
			{
				printf("%c", c + j - k -1);
			}
			printf("\n");
		}
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				printf(" ");
			}
			for (int k = 0; k < n-1-j; k++)
			{
				printf("%c", c + k);
			}
			for (int k = n - 2 - j; k > 0; k--)
			{
				printf("%c", c + k -1);
			}
			printf("\n");
		}
	}
	return 0;
}