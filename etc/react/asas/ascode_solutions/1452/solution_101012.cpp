#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
	for (;;)
	{
		int n, arr[100] = { 0 }, arr2[100] = { 0 }, count = 0; //2가 내림차순
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			arr2[i] = arr[i];
		}
		sort(arr, arr + n);
		sort(arr2, arr2 + n, greater<int>());
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == arr2[i])
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}