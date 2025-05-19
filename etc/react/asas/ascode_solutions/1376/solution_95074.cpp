#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[100] = { 0 }, m, count = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		scanf("%d", &m);
		for (int j = 0; j < n; j++)
		{
			if (arr[j] % m == 0)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}