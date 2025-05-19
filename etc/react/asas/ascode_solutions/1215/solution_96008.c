#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[10][10] = { 0 };
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[10][10] = { 0 };
		int a, b;
		scanf("%d %d", &a, &b);
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < b; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		if (a != b)
		{
			for (int j = 0; j < b; j++)
			{
				for (int k = 0; k < a; k++)
				{
					printf("%d ", arr[k][j]);
				}
				printf("\n");
			}
		}
		else
		{
			for (int j = 0; j < a; j++)
			{
				for (int k = 0; k < b; k++)
				{
					printf("%d ", arr[j][k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}