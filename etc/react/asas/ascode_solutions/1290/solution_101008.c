#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (;;)
	{
		int m1, n1, m2, n2;
		int arr1[10][10] = { 0 }, arr2[10][10] = { 0 };
		int result[10][10] = { 0 };
		scanf("%d %d", &m1, &n1);
		if (m1 == 0 && n1 == 0) break;
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
		if (m1 == m2 && n1 == n2)
		{
			for (int i = 0; i < m2; i++)
			{
				for (int j = 0; j < n2; j++)
				{
					result[i][j] = arr1[i][j] - arr2[i][j];
				}
			}
			int count = 0;
			for (int i = 0; i < m2; i++)
			{
				if (count) break;
				for (int j = 0; j < n2; j++)
				{
					if (result[i][j])
					{
						count++;
						break;
					}
				}
			}
			if (count == 0)
			{
				printf("Zero Matrix\n");
			}
			else
			{
				for (int i = 0; i < m2; i++)
				{
					for (int j = 0; j < n2; j++)
					{
						printf("%d ", result[i][j]);
					}
					printf("\n");
				}
			}
		}
		else
		{
			printf("Impossible\n");
		}
	}
	return 0;
}