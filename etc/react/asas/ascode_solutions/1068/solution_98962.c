#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
long long factorial(int n)
{
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		printf("%lld\n", factorial(n));
	}
}