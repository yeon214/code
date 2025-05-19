#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int r;
		scanf("%d", &r);
		char arr[21][11] = { 0 };
		for (int j = 0; j < r; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				scanf(" %c", &arr[j][k]);
			}
		}
		int count = 0;
		for (int j = 0; j < r; j++)
		{
			count = 0;
			for (int k = 0; k < 10; k++)
			{
				if (arr[j][k] == '.')
				{
					count++;
					break;
				}
			}
			if (count > 0)
			{
				for (int k = 0; k < 10; k++)
				{
					printf("%c", arr[j][k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}