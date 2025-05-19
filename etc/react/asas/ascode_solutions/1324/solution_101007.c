#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int h, m;
		scanf("%d %d", &h, &m);
		if (m >= 45)
		{
			printf("%d:%d\n", h, m - 45);
		}
		else
		{
			if (h == 0)
			{
				printf("23:%d\n", m + 15);
			}
			else
			{
				printf("%d:%d\n", h - 1, m + 15);
			}
		}
	}
	return 0;
}