#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int prime[5000001];
int main(void)
{
	int tc, m, n, i, j, count, temp;
	for (i = 2; i <= 5000000; i++)
	{
		prime[i] = i;
	}
	for (i = 2; i <= sqrt(5000000); i++)
	{
		if (prime[i] == 0) continue;
		for (j = 2 * i; j <= 5000000; j += i)
		{
			prime[j] = 0;
		}
	}
	scanf("%d", &tc);
	while (tc--)
	{
		count = 0;
		scanf("%d %d", &m, &n);
		if (m > n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for (i = m; i <= n - 12; i++)
		{
			if (prime[i] && prime[i + 6] && prime[i + 12])
			{
				printf("%d: %d-%d-%d\n", ++count, i, i + 6, i + 12);
			}
		}
		if (count == 0) printf("No Sexy Prime Triplets!\n");
	}
	return 0;
}