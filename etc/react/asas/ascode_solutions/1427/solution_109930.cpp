#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
bool judgment(int* arr, int number, int n)
{
	int a, b, c, d;
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				for (d = 0; d < n; d++)
				{
					if (arr[a] + arr[b] + arr[c] + arr[d] == number)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}
int main(void)
{
	int arr[200] = { 0 }, n, m, a, b, c, d, number;
	scanf("%d %d", &n, &m);
	for (a = 0; a < n; a++)
	{
		scanf("%d", &arr[a]);
	}
	sort(arr, arr + n);
	for (a = 0; a < m; a++)
	{
		scanf("%d", &number);
		bool result = judgment(arr, number, n);
		printf(result ? "Yes\n" : "No\n");
	}
	return 0;
}