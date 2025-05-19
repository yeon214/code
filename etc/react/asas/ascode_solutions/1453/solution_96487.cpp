#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[50] = { 0 };
		scanf("%d", &n);
		if (n == 1)
		{
			printf("YES\n");
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &arr[j]);
			}
			int temp = 0;
			for (int j = 0; j < n - 1; j++)
			{
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
			for (int j = 0; j < n-1; j++)
			{
				if ((arr[j + 1] - arr[j] == 1) || (arr[j + 1] - arr[j] == 0))
				{
					arr[j] = 0;
				}
			}
			int count = 0;
			for (int j = 0; j < n; j++)
			{
				if (arr[j] != 0)
				{
					count++;
				}
			}
			if (count == 1)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
	
	return 0;
}