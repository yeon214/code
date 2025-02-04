#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int arr[300001];
int main(void)
{
	int a, b, x, y, sum; //0이 아니면 소수
	for (x = 2; x <= 300000; x++)
	{
		arr[x] = x;
	}
	for (x = 2; x <= sqrt(300000); x++)
	{
		if (arr[x] == 0) continue;
		for (y = 2 * x; y <= 300000; y += x)
		{
			arr[y] = 0;
		}
	}
	for (;;)
	{
		int result[50000] = { 0 }, index = 0, flag, loop = 0;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		for (x = a; x <= b; x++)
		{
			if (arr[x] != 0)
			{
				result[index++] = arr[x];
			}
		}
		for (x = 0; x <= index - 5; x++)
		{
			sum = 0, flag = 0;
			for (y = x; y < x + 5; y++)
			{
				sum += result[y];
			}
			for (y = 2; y <= sqrt(sum); y++)
			{
				if (sum % y == 0)
				{
					flag++;
					break;
				}
			}
			if (flag == 0)
			{
				printf("#%d:%d+%d+%d+%d+%d:%d\n", ++loop, result[x], result[x + 1], result[x + 2], result[x + 3], result[x + 4], sum);
			}
		}
		printf("\n");
	}
	return 0;
}