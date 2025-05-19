#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, arr[20000] = { 0 }, check = 0, result = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		sort(arr, arr + n, greater<int>());
		for (int j = 0; j < n - 2; j++) //c
		{
			check = 0;
			if (result)
			{
				break;
			}
			for (int k = 1 + j; k < n - 1; k++) //b 
			{
				if (check || result)
				{
					break;
				}
				for (int p = 2 + j; p < n; p++) //a
				{
					if (arr[p] + arr[k] <= arr[j])
					{
						check++;
						break;
					}
					else if (arr[p] + arr[k] > arr[j])
					{
						result++;
						printf("%d : %d %d %d\n", arr[p] + arr[k] + arr[j], arr[j], arr[k], arr[p]);
						break;
					}
				}
			}
		}
		if (result == 0)
		{
			printf("No triangle!\n");
		}
	}
	return 0;
}