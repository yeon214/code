#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int emirp[100001];
int main(void)
{
	int tc, m, n, temp, a, b;
	for (a = 2; a <= 100000; a++)
	{
		emirp[a] = a;
	}
	for (a = 2; a <= sqrt(100000); a++)
	{
		if (emirp[a] == 0) continue;
		for (b = 2 * a; b <= 100000; b += a)
		{
			emirp[b] = 0;
		}
	} //0이 아니면 소수
	for (a = 2; a <= 100000; a++)
	{
		if (emirp[a])
		{
			char emirpPossibility[7] = { 0 };
			sprintf(emirpPossibility, "%d", emirp[a]);
			int len = strlen(emirpPossibility);
			for (b = 0; b < len/2; b++)
			{
				temp = emirpPossibility[b];
				emirpPossibility[b] = emirpPossibility[len - 1 - b];
				emirpPossibility[len - 1 - b] = temp;
			}
			int number = atoi(emirpPossibility), check = 0;
			for (b = 2; b <= sqrt(number); b++)
			{
				if (number % b == 0)
				{
					check++;
					break;
				}
			}
			if (check || emirp[a] == number)
			{
				emirp[a] = 0;
			}
		}
	}
	scanf("%d", &tc);
	while (tc--)
	{
		int count = 0, max = 0, min = 0;
		scanf("%d %d", &m, &n);
		if (m > n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for (a = m; a <= n; a++)
		{
			if (emirp[a])
			{
				if (count == 0)
				{
					max = emirp[a];
					min = emirp[a];
					count++;
				}
				else
				{
					count++;
					if (max < emirp[a]) max = emirp[a];
					if (min > emirp[a]) min = emirp[a];
				}
			}
		}
		if (count == 0)
		{
			printf("0 0 0\n");
		}
		else
		{
			printf("%d %d %d\n", max, min, count);
		}
	}
	return 0;
}