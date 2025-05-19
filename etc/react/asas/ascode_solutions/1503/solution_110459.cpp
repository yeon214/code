#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int n, k, remain, multi = 5, a, count = 0;
		scanf("%d %d", &n, &k);
		remain = 240 - k;
		for (a=0; a < n; a++)
		{
			remain -= multi;
			if (remain < 0) break;
			else if (remain == 0) {
				count++;
				break;
			}
			else count++;
			multi += 5;
		}
		printf("%d\n", count);
	}
	return 0;
}
