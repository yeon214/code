#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	for (;;)
	{
		int m1, n1, m2, n2;
		int arr1[15][15] = { 0 }, arr2[15][15] = { 0 }, arr3[15][15] = { 0 };
		int positive = 0, negative = 0;
		scanf("%d %d", &m1, &n1);
		if ((m1 == 0) && (n1 == 0))
		{
			break;
		}
		else
		{
			for (int i = 0; i < m1; i++)
			{
				for (int j = 0; j < n1; j++)
				{
					scanf("%d", &arr1[i][j]);
				}
			}
			scanf("%d %d", &m2, &n2);
			for (int i = 0; i < m2; i++)
			{
				for (int j = 0; j < n2; j++)
				{
					scanf("%d", &arr2[i][j]);
				}
			}
			if ((m1 == m2) && (n1 == n2))
			{
				for (int i = 0; i < m2; i++)
				{
					for (int j = 0; j < n2; j++)
					{
						arr3[i][j] = arr1[i][j] + arr2[i][j];
					}
				}
				for (int i = 0; i < m2; i++)
				{
					for (int j = 0; j < n2; j++)
					{
						if (arr3[i][j] > 0)
						{
							positive++;
						}
						if (arr3[i][j] < 0)
						{
							negative++;
						}
					}
				}
				for (int i = 0; i < m2; i++)
				{
					for (int j = 0; j < n2; j++)
					{
						printf("%d ", arr3[i][j]);
					}
					printf("\n");
				}
				printf("Positive : %d, Negative : %d\n", positive, negative);
			}
			else
			{
				printf("Impossible!\n");
			}
			printf("\n");
		}
	}
	return 0;
}