#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
	int tc, n, m, a, b, max, min;
	scanf("%d", &tc);
	while (tc--)
	{
		int arr[10][10];
		int revel[20], count = 0;
		scanf("%d %d", &n, &m);
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < m; b++)
			{
				scanf("%d", &arr[a][b]);
			}
		}
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < m; b++)
			{
				if (b == 0)
				{
					max = arr[a][b];
					min = arr[a][b];
				}
				else
				{
					if (max > arr[a][b]) max = arr[a][b];
					if (min < arr[a][b]) min = arr[a][b];
				}
			}
			revel[count++] = max;
			revel[count++] = min;
		}
		sort(revel, revel + count, greater<int>());
		for (b = 0; b < count; b++)
		{
			printf("%d ", revel[b]);
		}
		printf("\n");
	}
	return 0;
}