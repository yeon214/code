#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, a, temp, b;
	char number[21];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%s", number);
		int lenNumber = strlen(number), score = 0;
		for (a = 0; a < lenNumber/2; a++)
		{
			temp = number[a];
			number[a] = number[lenNumber - 1 - a];
			number[lenNumber - 1 - a] = temp;
		}
		for (a = 0; a < lenNumber; a++)
		{
			if (number[a]=='1')
			{
				int multi = 1;
				for (b = 0; b < a; b++)
				{
					multi *= 2;
				}
				score += multi;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}