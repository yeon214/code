#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int prime[10001] = { 0 }, i, j, temp, check;
	for (i = 2; i <= 10000; i++)
	{
		prime[i] = i;
	}
	for (i = 2; i <= sqrt(10000); i++)
	{
		if (prime[i] == 0) continue;
		for (j = 2 * i; j <= 10000; j += i)
		{
			prime[j] = 0;
		}
	}
	int m, n;
	for (;;)
	{
		check = 0;
		scanf("%d %d", &m, &n);
		if (m == 0 && n == 0) break;
		if (m > n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for (i = m; i <= n-2; i++)
		{
			if (prime[i] && prime[i+2])
			{
				printf("%d:(%d,%d)\n", ++check, prime[i], prime[i + 2]);
			}
		}
		if (check == 0) printf("No Twin Primes!\n");
	}
	return 0;
}