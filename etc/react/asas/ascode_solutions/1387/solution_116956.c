#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calculate(void)
{
	int arr[3][3] = { 0 }, sum = 0, check = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			scanf("%d", &arr[j][k]);
		}
	}
	for (int j = 0; j < 3; j++)
	{
		sum = 0;
		for (int k = 0; k < 3; k++)
		{
			sum += arr[j][k]; //가로
		}
		if (j == 0)
		{
			check = sum;
		}
		else
		{
			if (check != sum)
			{
				return 1; //1이면 마방진 아님
			}
		}
	}
	for (int j = 0; j < 3; j++)
	{
		sum = 0;
		for (int k = 0; k < 3; k++)
		{
			sum += arr[k][j]; //세로
		}
		if (j == 0)
		{
			check = sum;
		}
		else
		{
			if (check != sum)
			{
				return 1; //1이면 마방진 아님
			}
		}
	}
	sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum += arr[j][j];
	}
	if (check != sum)
	{
		return 1; //1이면 마방진 아님
	}
	sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum += arr[j][2-j];
	}
	if (check != sum)
	{
		return 1; //1이면 마방진 아님
	}
	return 0;
}
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int result = calculate();
		if (result == 1)
		{
			printf("No Magic Square!\n");
		}
		else
		{
			printf("Magic Square!\n");
		}
	}
	return 0;
}