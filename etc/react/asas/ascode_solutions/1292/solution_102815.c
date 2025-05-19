#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[1000] = { 0 }, sum = 0, count = 0;
		double ave = 0.0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		ave = sum / (double)n;
		for (int j = 0; j < n; j++)
		{
			if (ave < arr[j])
			{
				count++;
			}
		}
		printf("%d from total %d\n", count, n);
	}
	return 0;
}