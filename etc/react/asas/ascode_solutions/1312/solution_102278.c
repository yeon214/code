#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[101] = { 0 }, arr2[101] = { 0 }, result[101] = { 0 };
		int n, a, x;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d %d", &a, &x);
			arr[x] = a;
		}
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d %d", &a, &x);
			arr2[x] = a;
		}
		for (int j = 0; j < 101; j++)
		{
			result[j] = arr[j] - arr2[j];
		}
		int count = 0;
		for (int j = 100; j >= 0; j--)
		{
			if (result[j] > 0)
			{
				if (count)
				{
					printf("+");
				}
				if (result[j] != 0 && j == 0)
				{
					printf("%d", result[j]);
				}
				else if (result[j] == 1 && j != 1)
				{
					printf("x^%d", j);
				}
				else if (result[j] != 1 && j == 1)
				{
					printf("%dx", result[j]);
				}
				else if (result[j] == 1 && j == 1)
				{
					printf("x");
				}
				else
				{
					printf("%dx^%d", result[j], j);
				}
				count++;
			}
			else if (result[j] < 0)
			{
				if (result[j] != 0 && j == 0)
				{
					printf("%d", result[j]);
				}
				else if (result[j] == -1 && j != 1)
				{
					printf("-x^%d", j);
				}
				else if (result[j] != -1 && j == 1)
				{
					printf("%dx", result[j]);
				}
				else if (result[j] == -1 && j == 1)
				{
					printf("-x");
				}
				else
				{
					printf("%dx^%d", result[j], j);
				}
				count++;
			}
		}
		if (count == 0)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}