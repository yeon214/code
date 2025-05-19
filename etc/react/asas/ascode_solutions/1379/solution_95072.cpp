#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[100] = { 0 };
		double ave = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < n - 1; j++)
		{
			int temp = 0;
			for (int k = 0; k < n - 1 - j; k++)
			{
				if (arr[k] > arr[k + 1])
				{
					temp = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temp;
				}
			}
		}
		for (int j = 0; j < 5; j++)
		{
			ave += arr[j];
		}
		printf("%.1lf\n", ave / 5.0);
	}
	return 0;
}