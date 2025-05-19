#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[19][19] = { 0 };
		for (int j = 0; j < 19; j++)
		{
			for (int k = 0; k < 19; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		int black = 0, white = 0;
		for (int j = 0; j < 19; j++)
		{
			for (int k = 0; k < 19; k++)
			{
				if (arr[j][k] != 0)
				{
					int a = 0, b = 0, c = 0, d = 0;
					int x = 0, y = 0, z = 0, q = 0;
					for (int o = 0; o < 5; o++)
					{
						if (arr[j][k + o]==1)
						{
							a++;
						}
						if (arr[j+o][k] == 1)
						{
							b++;
						}
						if (arr[j+o][k + o] == 1)
						{
							c++;
						}
						if (arr[j - o][k + o] == 1)
						{
							d++;
						}
						if (arr[j][k + o] == 2)
						{
							x++;
						}
						if (arr[j + o][k] == 2)
						{
							y++;
						}
						if (arr[j + o][k + o] == 2)
						{
							z++;
						}
						if (arr[j - o][k + o] == 2)
						{
							q++;
						}
					}
					if (a == 5 || b == 5 || c == 5 || d == 5)
					{
						black++;
					}
					if (x == 5 || y == 5 || z == 5 || q == 5)
					{
						white++;
					}
				}
			}
		}
		if (black > 0)
		{
			printf("Black wins!\n");
		}
		else if (white > 0)
		{
			printf("White wins!\n");
		}
		else
		{
			printf("Yet\n");
		}
	}
	return 0;
}