#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	int c = 65;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int h;
		scanf("%d", &h);
		for (int j = 0; j < h; j++)
		{
			for (int k = h - j; k > 0; k--)
			{
				printf("%c", (char)c+j);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}