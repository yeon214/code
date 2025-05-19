#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a1, a2, a3, b1, b2, b3, result = 0;
		scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
		for (int j = 1;; j++)
		{
			if (j % a1 == b1 && j % a2 == b2 && j % a3 == b3)
			{
				result = j;
				break;
			}
		}
		printf("%d\n", result);
	}

	return 0;
}