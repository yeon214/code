#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[30] = { 0 }, sum = 0, result = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				sum = 0;
				for (int p = j; p <= k; p++)
				{
					sum += arr[p];
				}
				if (j == 0 && k == 0)
				{
					result = sum;
				}
				else
				{
					if (result < sum)
					{
						result = sum;
					}
				}
			}
		}
		printf("%d\n", result);
	}
	return 0;
}