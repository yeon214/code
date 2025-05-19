#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[1000] = {0};
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			int a;
			scanf("%d", &a);
			arr[a - 1]++;
		}
		for (int j = 0; j < 1000; j++)
		{
			if (arr[j] != 0)
			{
				printf("%d ", j + 1);
			}
		}
		printf("\n");
	}
	return 0;
}