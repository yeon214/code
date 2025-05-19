#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int bingo(void)
{
	int arr[19][19] = { 0 };
	for (int j = 0; j < 19; j++)
	{
		for (int k = 0; k < 19; k++)
		{
			scanf("%d", &arr[j][k]);
		}
	}
	int count = 0;
	for (int j = 0; j < 14; j++)
	{
		for (int k = 0; k < 14; k++)
		{
			if (arr[j][k] == 1)
			{
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j][k + a] == 1) //가로
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 1;
				}
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j+a][k] == 1) //세로
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 1;
				}
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j+a][k + a] == 1) //원래 대각선
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 1;
				}
			}
			else if (arr[j][k] == 2)
			{
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j][k + a] == 2) //가로
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 2;
				}
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j + a][k] == 2) //세로
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 2;
				}
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j + a][k + a] == 2) //원래 대각선
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 2;
				}
			}
		}
	}
	for (int j = 0; j  <= 14; j++) //역대각선
	{
		for (int k = 18; k >= 4; k--)
		{
			if (arr[j][k] == 1)
			{
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j + a][k - a] == 1)
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 1;
				}
			}
			else if (arr[j][k] == 2)
			{
				count = 0;
				for (int a = 0; a < 5; a++)
				{
					if (arr[j + a][k - a] == 2)
					{
						count++;
					}
				}
				if (count == 5)
				{
					return 2;
				}
			}
		}
	}
	return 0;
}
int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int result = 0;
		result = bingo();
		if (result == 1)
		{
			printf("Black wins!\n");
		}
		else if (result == 2)
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