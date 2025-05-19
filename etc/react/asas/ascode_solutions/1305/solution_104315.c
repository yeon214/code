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
		for (;;count++)
		{
			if (arr[0] == secret[0])
			{
				break;
			}
			arr[0]++;
			if (arr[0] == 10)
			{
				arr[0] = 0;
			}
		}
		arr[0] = num;
		for (;; countmin++)
		{
			if (arr[0] == secret[0])
			{
				break;
			}
			arr[0]--;
			if (arr[0] == -1)
			{
				arr[0] = 9;
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
		num = arr[1];
		count = 0, countmin = 0;
		for (;; count++)
		{
			if (arr[1] == secret[1])
			{
				break;
			}
			arr[1]++;
			if (arr[1] == 10)
			{
				arr[1] = 0;
			}
		}
		arr[1] = num;
		for (;; countmin++)
		{
			if (arr[1] == secret[1])
			{
				break;
			}
			arr[1]--;
			if (arr[1] == -1)
			{
				arr[1] = 9;
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
		num = arr[2];
		count = 0, countmin = 0;
		for (;; count++)
		{
			if (arr[2] == secret[2])
			{
				break;
			}
			arr[2]++;
			if (arr[2] == 10)
			{
				arr[2] = 0;
			}
		}
		arr[2] = num;
		for (;; countmin++)
		{
			if (arr[2] == secret[2])
			{
				break;
			}
			arr[2]--;
			if (arr[2] == -1)
			{
				arr[2] = 9;
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
		printf("%d\n", result);
	}
	return 0;
}