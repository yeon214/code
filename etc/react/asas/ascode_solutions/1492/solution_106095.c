#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc, n, low, column, a, b;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d", &n);
		int arr[31][31] = { 0 }, num = 1, flag;
		low = 0, column = (n - 1) / 2;
		arr[low][column] = 1;
		for (a = 0; a < n * n; a++)
		{
			flag = 0;
			if (low - 1 < 0 && column + 1 > n - 1) //위 오른쪽
			{
				for (b = 0; b < n; b++)
				{
					if (low + flag > n - 1)
					{
						low = 0, flag = 0;
					}
					if (arr[low + flag][column] == 0)
					{
						arr[low + flag][column] = ++num;
						low = low + flag;
						break;
					}
					else flag++;
				}
			}
			else if (low - 1 < 0) //위
			{
				for (b = 0; b < n; b++)
				{
					if (n - 1 + flag > n - 1)
					{
						flag = 1;
					}
					if (arr[n - 1 + flag][column + 1] == 0)
					{
						arr[n - 1 + flag][column + 1] = ++num;
						low = n - 1 + flag;
						column = column + 1;
						break;
					}
					else flag++;
				}
			}
			else if (column + 1 > n - 1) //오른쪽
			{
				for (b = 0; b < n; b++)
				{
					if (low - 1 + flag > n-1)
					{
						low = 1, flag = 0;
					}
					if (arr[low - 1 + flag][0] == 0)
					{
						arr[low - 1 + flag][0] = ++num;
						low = low - 1 + flag;
						column = 0;
						break;
					}
					else flag++;
				}
			}
			else //범위에서 벗어나지 않을 때
			{
				for (b = 0; b < n; b++)
				{
					if (arr[low - 1][column + 1] == 0)
					{
						arr[low - 1][column + 1] = ++num;
						low = low - 1;
						column = column + 1;
						break;
					}
					else
					{
						if (low + flag > n - 1)
						{
							low = 0, flag = 0;
						}
						if (arr[low + flag][column] == 0)
						{
							arr[low + flag][column] = ++num;
							low = low + flag;
							break;
						}
						else flag++;
					}
				}
			}
		}
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				printf("%d ", arr[a][b]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}