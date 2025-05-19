#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, big = 0, small = 0;
	scanf("%d %d", &n, &m);
	for (; n > 25; big++)
	{
		n -= 45;
	}
	if (n > 0 && n < 26)
	{
		small++;
	}
	if (m > 14)
	{
		small++;
	}
	if (big) printf("Big bus : %d\n", big);
	if (small) printf("Small bus : %d\n", small);
	return 0;
}