#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[500] = { 0 }, sum=0, result =0;
		int min = 0, max = 0;
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
				if (j==0 && k == 0)
				{
					result = sum;
					min = j;
					max = k;
				}
				else
				{
					if (result <= sum)
					{
						result = sum;
						min = j;
						max = k;
					}
				}
			}
		}
		printf("%d %d %d\n", min+1, max+1, result);
	}
	return 0;
}