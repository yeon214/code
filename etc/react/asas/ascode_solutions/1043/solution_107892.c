#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, a, number, b;
	char arr1[16][16] = { 0 }, arr2[16][16] = { 0 };
	scanf("%d", &n);
	for (a = 0; a < n; a++)
	{
		int price[16] = { 0 }, count = 0;
		scanf("%d", &number);
		for (; number > 0;count++)
		{
			price[count] = number % 2;
			number /= 2;
		}
		for (b = n - 1; b >= 0; b--)
		{
			if (price[b]) arr1[a][n - 1 - b] = '#';
			else arr1[a][n - 1 - b] = ' ';
		}
	}
	for (a = 0; a < n; a++)
	{
		int price[16] = { 0 }, count = 0;
		scanf("%d", &number);
		for (; number > 0; count++)
		{
			price[count] = number % 2;
			number /= 2;
		}
		for (b = n - 1; b >= 0; b--)
		{
			if (price[b]) arr2[a][n - 1 - b] = '#';
			else arr2[a][n - 1 - b] = ' ';
		}
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (arr1[a][b] == '#' || arr2[a][b] == '#')
			{
				arr1[a][b] = '#';
			}
		}
	}
	for (a = 0; a < n; a++)
	{
		printf("[");
		for (b = 0; b < n; b++)
		{
			printf("%c", arr1[a][b]);
		}
		printf("]\n");
	}
	return 0;
}