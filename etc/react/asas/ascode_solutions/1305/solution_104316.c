#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[3] = { 0 }, secret[3] = { 0 };
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &secret[j]);
		}
		int count = 0, countmin = 0, result = 0, num = arr[0];
		for (int j = 0; j < 3; j++)
		{
			num = arr[j];
			count = 0, countmin = 0;
			for (;; count++)
			{
				if (arr[j] == secret[j])
				{
					break;
				}
				arr[j]++;
				if (arr[j] == 10)
				{
					arr[j] = 0;
				}
			}
			arr[j] = num;
			for (;; countmin++)
			{
				if (arr[j] == secret[j])
				{
					break;
				}
				arr[j]--;
				if (arr[j] == -1)
				{
					arr[j] = 9;
				}
			}
			if (count > countmin)
			{
				result += countmin;
			}
			else
			{
				result += count;
			}
		}
		printf("%d\n", result);
	}
	return 0;
}