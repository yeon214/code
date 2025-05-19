#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc, a1, a2, a3, b1, b2, b3, n;
	scanf("%d", &tc);
	while (tc--)
	{
		n = 0;
		scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
		for (;;n++)
		{
			if (n % a1 == b1 && n % a2 == b2 && n % a3 == b3)
			{
				break;
			}
		}
		printf("%d\n", n);
	}
	return 0;
}