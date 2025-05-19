#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int judgment(void)
{
	int n;
	char arr[50][50] = { 0 }, result[51] = { 0 };
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			scanf(" %c", &arr[j][k]);
		}
	}
	scanf("%s", result);
	int len = strlen(result), count = 0;
	for (int j = 0; j < n; j++) //가로
	{
		for (int k = 0; k <= n - len; k++)
		{
			count = 0;
			for (int p = 0; p < len; p++)
			{
				if (arr[j][p + k] == result[p])
				{
					count++;
				}
			}
			if (count == len)
			{
				return 1;
			}
		}
	}
	for (int j = 0; j < n; j++) //세로
	{
		for (int k = 0; k <= n - len; k++)
		{
			count = 0;
			for (int p = 0; p < len; p++)
			{
				if (arr[p + k][j] == result[p])
				{
					count++;
				}
			}
			if (count == len)
			{
				return 1;
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
		int result = judgment();
		if (result == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}