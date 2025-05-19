#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int m, n, count = 0;
		scanf("%d %d", &m, &n);
		for (int j = m; j <= n; j++)
		{
			int a = sqrt(j), sum = 0;
			for (int k = 2; k <= a; k++)
			{
				if (k * k == j)
				{
					sum += k;
				}
				else if (j % k == 0)
				{
					sum += k;
					sum += j / k;
				}
			}
			if (sum + 1 > j)
			{
				count++;
			}
		}
		if (count > 0)
		{
			printf("%d-%d:%d\n", m, n, count);
		}
		else
		{
			printf("%d-%d:NO\n", m, n);
		}
	}
	return 0;
}