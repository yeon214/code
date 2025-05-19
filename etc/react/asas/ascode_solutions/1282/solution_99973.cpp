#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int m, n, count = 0;
		scanf("%d %d", &m, &n); //m이 높이 n이 폭
		char arr[36][36] = { 0 };
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
				if (arr[j][k] == '@')
				{
					count++;
				}
			}
		}
		if (count == 0)
		{
			printf("%d 0\n", m * n);
			printf("No Mine\n");
		}
		else
		{
			int real[35][35] = { 0 };
			for (int j = 0; j < m; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (arr[j][k] == '@')
					{
						real[j][k] = -10;

						for (int a = j - 1; a <= j + 1; a++)
						{
							for (int b = k - 1; b <= k + 1; b++)
							{
								if ((a >= 0 && a < m) && (b >= 0 && b < n))
								{
									real[a][b]++;
								}
							}
						}
					}
				}
			}
			printf("%d %d\n", m * n, count);
			for (int j = 0; j < m; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (real[j][k] < 0)
					{
						printf("@");
					}
					else
					{
						printf("%d", real[j][k]);
					}
				}
				printf("\n");
			}
		}
	}
	return 0;
}