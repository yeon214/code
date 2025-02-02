#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
	int tc, n;
	scanf("%d", &tc);
	while (tc--)
	{
		int arr[100] = { 0 }, a, b, c, price = 0, result[3] = { 0 }, target, change;
		scanf("%d", &n);
		for (a = 0; a < n; a++)
		{
			scanf("%d", &arr[a]);
		}
		scanf("%d", &target);
		sort(arr, arr + n, greater<int>());
		for (a = 0; a < n - 2; a++)
		{
			for (b = a + 1; b < n - 1; b++)
			{
				for (c = b + 1; c < n; c++)
				{
					change = abs(target - (arr[a] + arr[b] + arr[c]));
					if (a == 0 && b == a + 1 && c == b + 1)
					{
						result[0] = arr[a], result[1] = arr[b], result[2] = arr[c];
						price = result[0] + result[1] + result[2];
					}
					else
					{
						if (abs(target - price) > change)
						{
							result[0] = arr[a], result[1] = arr[b], result[2] = arr[c];
							price = result[0] + result[1] + result[2];
						}
					}
				}
			}
		}
		sort(result, result + 3);
		printf("%d\n", price);
		printf("%d %d %d\n", result[0], result[1], result[2]);
	}
	return 0;
}