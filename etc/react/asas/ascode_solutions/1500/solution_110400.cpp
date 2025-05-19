#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int arr[4] = { 0 }, a, result[3] = { 0 };
		for (a = 0; a < 4; a++)
		{
			scanf("%d", &arr[a]);
		}
		sort(arr, arr + 4);
		result[0] = arr[3] - arr[0];
		result[1] = arr[3] - arr[1];
		result[2] = arr[3] - arr[2];
		sort(result, result + 3);
		printf("%d %d %d\n", result[0], result[1], result[2]);
	}
	return 0;
}
