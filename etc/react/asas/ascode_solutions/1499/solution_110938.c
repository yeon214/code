#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, arr[100][3], a, b, index, flag = 0;
	char result[100][3];
	scanf("%d", &n);
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < 3; b++)
		{
			scanf("%d", &arr[a][b]);
			result[a][b] = '0';
			if (arr[a][b] == 2) index = b;
		}
	}
	for (a = n-1; a >= 0; a--)
	{
		if (a == 0)
		{
			if (index == 0)
			{
				if (arr[0][0] == 0)
				{
					result[0][0] = 'X';
				}
				else if (arr[0][1] == 0)
				{
					result[0][1] = 'X';
				}
			}
			else if (index == 1)
			{
				if (arr[0][1] == 0)
				{
					result[0][1] = 'X';
				}
				else if (arr[0][2] == 0)
				{
					result[0][2] = 'X';
				}
				else if (arr[0][0] == 0)
				{
					result[0][0] = 'X';
				}
			}
			else
			{
				if (arr[0][2] == 0)
				{
					result[0][2] = 'X';
				}
				else if (arr[0][1] == 0)
				{
					result[0][1] = 'X';
				}
			}
		}
		else
		{
			if (index == 0) //왼쪽
			{
				if (arr[a - 1][0] && arr[a - 1][1])
				{
					flag++;
					break;
				}
				else if (arr[a - 1][0] == 0)
				{
					result[a][0] = '|';
					index = 0;
				}
				else if (arr[a - 1][1] == 0)
				{
					result[a][0] = '/';
					index = 1;
				}
			}
			else if (index == 1) //중간
			{
				if (arr[a - 1][0] && arr[a - 1][1] && arr[a - 1][2])
				{
					flag++;
					break;
				}
				else if (arr[a - 1][1] == 0)
				{
					result[a][1] = '|';
					index = 1;
				}
				else if (arr[a - 1][2] == 0)
				{
					result[a][1] = '/';
					index = 2;
				}
				else if (arr[a - 1][0] == 0)
				{
					result[a][1] = '\\';
					index = 0;
				}
			}
			else //오른쪽
			{
				if (arr[a - 1][1] && arr[a - 1][2])
				{
					flag++;
					break;
				}
				else if (arr[a - 1][2] == 0)
				{
					result[a][2] = '|';
					index = 2;
				}
				else if (arr[a - 1][1] == 0)
				{
					result[a][2] = '\\';
					index = 1;
				}
			}
		}
	}
	if (flag)
	{
		printf("blocked!\n");
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < 3; b++)
			{
				printf("%c", result[a][b]);
			}
			printf("\n");
		}
	}
	return 0;
}