#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[31] = { 0 }, arr2[31] = { 0 };
		scanf("%s %s", arr, arr2);
		int len = strlen(arr), len2 = strlen(arr2);
		int longLen = 0, sum = 0;
		if (len > len2)
		{
			longLen = len;
			for (int j = len2; j < longLen; j++)
			{
				arr2[j] = 0;
			}
		}
		else
		{
			longLen = len2;
			for (int j = len; j < longLen; j++)
			{
				arr[j] = 0;
			}
		}
		for (int j = 0; j < longLen; j++)
		{
			int a = (2 * (arr[j] - 65) + 1), b = (2 * (arr2[j] - 65) + 1);
			if (arr[j] == 0)
			{
				a = 0;
			}
			if (arr2[j] == 0)
			{
				b = 0;
			}
			sum += abs(a - b);
		}
		printf("%d\n", sum);
	}
	return 0;
}