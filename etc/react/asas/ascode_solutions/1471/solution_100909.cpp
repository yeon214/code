#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[50] = { 0 };
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		sort(arr, arr + n);
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] == arr[j + 1])
			{
				arr[j] = 0;
			}
		}
		for (int j = 0; j < n; j++)
		{
			if (arr[j])
			{
				printf("%d ", arr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}