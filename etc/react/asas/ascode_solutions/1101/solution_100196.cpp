#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[101][101] = { 0 };
		int result[101][101] = { 0 };
		int x, y; //x가 가로 y가 세로 헷갈리지 않게 유의하기
		scanf("%d %d", &x, &y);
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < x; k++)
			{
				scanf(" %c", &arr[j][k]);
			}
		}
		for (int j = 0; j < y; j++) // 음수면 * 0이면 . 양수면 숫자 출력
		{
			for (int k = 0; k < x; k++)
			{
				if (arr[j][k] == '*')
				{
					result[j][k] = -10;
					for (int a = j - 1; a <= j + 1; a++)
					{
						for (int b = k - 1; b <= k + 1; b++)
						{
							if ((a >= 0 && a < y) && (b >= 0 && b < x))
							{
								if (a != j || b != k)
								{
									result[a][b]++;
								}
							}
						}
					}
				}
			}
		}
		for (int j = 0; j < y; j++) // 음수면 * 0이면 . 양수면 숫자 출력
		{
			for (int k = 0; k < x; k++)
			{
				if (result[j][k] < 0)
				{
					printf("*");
				}
				else if (result[j][k] == 0)
				{
					printf(".");
				}
				else
				{
					printf("%d", result[j][k]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}