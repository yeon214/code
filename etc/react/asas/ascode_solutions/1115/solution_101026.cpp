#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b, arr[10][10] = { 0 }, arr2[10][10] = { 0 };
		scanf("%d %d", &a, &b);
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < b; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < b; k++)
			{
				arr2[k][j] = arr[j][k];
			}
		}
		if (a == b)
		{
			int count = 0;
			for (int j = 0; j < a; j++)
			{
				if (count) break;
				for (int k = 0; k < b; k++)
				{
					if (arr[j][k] != arr2[j][k])
					{
						count++;
						break;
					}
				}
			}
			if (count == 0)
			{
				printf("Identical\n");
			}
			else
			{
				for (int j = 0; j < a; j++)
				{
					for (int k = 0; k < b; k++)
					{
						printf("%d ", arr2[j][k]);
					}
					printf("\n");
				}
			}
		}
		else
		{
			for (int j = 0; j < b; j++)
			{
				for (int k = 0; k < a; k++)
				{
					printf("%d ", arr2[j][k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}