#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int arr[20][20] = { 0 }, result[20][20] = { 0 };
		int count = 0;
		for (int j = 0; j < 20; j++)
		{
			for (int k = 0; k < 20; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		for (int j = 0; j < 20; j++)
		{
			for (int k = 0; k < 20; k++)
			{
				if (arr[j][k] == 0)
				{
					count = 0;
					for (int a = j - 1; a <= j + 1; a++)
					{
						for (int b = k - 1; b <= k + 1; b++)
						{
							if ((a >= 0 && a < 20) && (b >= 0 && b < 20))
							{
								if (a!=j||b!=k)
								{
									if (arr[a][b] == 1)
									{
										count++;
									}
								}
							}
							/*printf(" a %d b %d count %d\n", a, b, count);*/
						}
					}
					if (count == 3)
					{
						result[j][k] = 1;
					}
					/*printf(" count %d\n", count);*/
				}
				else
				{
					count = 0;
					for (int a = j - 1; a <= j + 1; a++)
					{
						for (int b = k - 1; b <= k + 1; b++)
						{
							if ((a >= 0 && a < 20) && (b >= 0 && b < 20))
							{
								if (a != j || b != k)
								{
									if (arr[a][b] == 1)
									{
										count++;
									}
								}
							}
						}
					}
					if (count == 2 || count == 3)
					{
						result[j][k] = 1;
					}
				}
			}
		}
		printf("<#%d 2nd Generation>\n", i);
		for (int j = 0; j < 20; j++)
		{
			for (int k = 0; k < 20; k++)
			{
				printf("%d ", result[j][k]);
			}
			printf("\n");
		}
	}
	return 0;
}