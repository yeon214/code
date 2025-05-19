#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[20] = {0}, temp = 0;
		double ave = 0.0;
		double differ = 0, compar = 0;
		int real = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < n-1; j++)
		{
			for (int k = 0; k < n-1-j; k++)
			{
				if (arr[k] > arr[k + 1])
				{
					temp = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temp;
				}
			}
		}
		for (int j = 1; j < n - 1; j++)
		{
			ave += arr[j];
		}
		ave /= (double)(n - 2);
		for (int j = 1; j < n - 1; j++)
		{
			differ = ave - arr[j];
			if (differ < 0)
			{
				differ *= -1.0;
			}
			if (j == 1)
			{
				compar = differ;
				real = arr[j];
			}
			else
			{
				if (differ < compar)
				{
					compar = differ;
					real = arr[j];
				}
			}
		}
		printf("%d\n", real);
	}
	return 0;
}