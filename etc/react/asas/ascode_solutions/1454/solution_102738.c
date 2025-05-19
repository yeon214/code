#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int n,  num, line = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d" , &num);
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (num == arr[i][j])
				{
					arr[i][j] = 0;
				}
			}
		}
	}
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] != 0) //가로
			{
				count++; //숫자 살아있다는 의미
				break;
			}
		}
		if (count == 0) line++;
	}
	for (int i = 0; i < 5; i++)
	{
		count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] != 0) //세로
			{
				count++; //숫자 살아있다는 의미
				break;
			}
		}
		if (count == 0) line++;
	}
	count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i][i] != 0)
		{
			count++; //숫자 살아있다는 의미
			break;
		}
	}
	if (count == 0) line++;
	count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i][4-i] != 0)
		{
			count++; //숫자 살아있다는 의미
			break;
		}
	}
	if (count == 0) line++;
	printf("%d", line);
	return 0;
}