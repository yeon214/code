#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, num, temp = 0;
	scanf("%d", &n);
	int arr1[16][16] = { 0 }, arr2[16][16] = { 0 }, real[16][16] = { 0 };
	// 일단 배열에 넣은 뒤에 뒤집자
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		int share = num;
		for (int j = 0; j < n; j++)
		{
			arr1[i][j] = share % 2;
			share /= 2;
		}
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		int share = num;
		for (int j = 0; j < n; j++)
		{
			arr2[i][j] = share % 2;
			share /= 2;
		}
	}
	for (int i = 0; i < n; i++) //뒤집
	{
		for (int j = 0; j < n / 2; j++)
		{
			temp = arr1[i][j];
			arr1[i][j] = arr1[i][n - 1 - j];
			arr1[i][n - 1 - j] = temp;

			temp = arr2[i][j];
			arr2[i][j] = arr2[i][n - 1 - j];
			arr2[i][n - 1 - j] = temp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i][j] == 1 || arr2[i][j] == 1)
			{
				real[i][j]++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("[");
		for (int j = 0; j < n; j++)
		{
			if (real[i][j] == 1)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("]\n");
	}
	return 0;
}