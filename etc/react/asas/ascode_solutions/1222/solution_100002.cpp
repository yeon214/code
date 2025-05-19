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
		int arr[5] = { 0 };
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[j]);
		}
		sort(arr, arr + 5);
		if (arr[3] - arr[1] >= 3)
		{
			printf("KIN\n");
		}
		else
		{
			printf("%d\n", arr[1] + arr[2] + arr[3]);
		}
	}
	return 0;
}