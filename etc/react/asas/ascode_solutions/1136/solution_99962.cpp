#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int m, n;
		char arr[31][31] = { 0 };
		int real[30][30] = { 0 };
		scanf("%d %d", &m, &n);
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				scanf(" %c", &arr[j][k]);
			}
		}
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (arr[j][k]=='*')
				{
					real[j][k] = -10;
				    
					for (int h = j - 1; h <= j + 1; h++)
					{
						for (int a = k - 1; a <= k + 1; a++)
						{
							if ((h >= 0 && h < m) && (a >= 0 && a < n))
							{
								real[h][a]++;
							}
						}
					}
					/*real[j - 1][k - 1]++;
					real[j - 1][k]++;
					real[j - 1][k + 1]++;
					real[j + 1][k - 1]++;
					real[j + 1][k]++;
					real[j + 1][k + 1]++;
					real[j][k - 1]++;
					real[j][k+1]++;*/
				}
			}
		}
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (real[j][k] < 0)
				{
					printf("*");
				}
				else
				{
					printf("%d", real[j][k]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}