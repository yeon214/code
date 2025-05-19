#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	for (;;)
	{
		int m;
		int max = -500, min = 500;
		scanf("%d", &m);
		if (m == 0) break;
		for (int i = 0; i < m; i++)
		{
			int a;
			scanf("%d", &a);
			if ((a > -101) && (a < 101))
			{
				if (max < a) max = a;
				if (min > a) min = a;
			}
		}
		printf("%d %d\n", max, min);
	}

	return 0;
}