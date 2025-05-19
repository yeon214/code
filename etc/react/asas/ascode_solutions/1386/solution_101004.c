#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			for (int p = 0; p <= j; p++)
			{
				printf("###");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}