#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;

int main(void)
{
	for (;;)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else
		{
			int arr[100] = { 0 }, arrB[100] = { 0 }; //B 내림차순
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			for (int i = 0; i < n; i++)
			{
				arrB[i] = arr[i];
			}
			sort(arr, arr + n);
			sort(arrB, arrB + n, greater<int>());
			for (int i = 0; i < n; i++)
			{
				if (arr[i] == arrB[i])
				{
					count++;
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}