#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, a, result1, result2, result3, result4, multi, b;
	char arr1[9], arr2[9], arr3[9], arr4[9];
	scanf("%d", &tc);
	while (tc--)
	{
		result1 = 0, result2 = 0, result3 = 0, result4 = 0;
		for (a = 7; a >= 0; a--)
		{
			scanf(" %c", &arr1[a]);
		}
		for (a = 7; a >= 0; a--)
		{
			scanf(" %c", &arr2[a]);
		}
		for (a = 7; a >= 0; a--)
		{
			scanf(" %c", &arr3[a]);
		}
		for (a = 7; a >= 0; a--)
		{
			scanf(" %c", &arr4[a]);
		}
		for (a = 0; a < 8; a++)
		{
			if (arr1[a] == '1')
			{
				multi = 1;
				for (b = 0; b < a; b++)
				{
					multi *= 2;
				}
				result1 += multi;
			}
		}
		for (a = 0; a < 8; a++)
		{
			if (arr2[a] == '1')
			{
				multi = 1;
				for (b = 0; b < a; b++)
				{
					multi *= 2;
				}
				result2 += multi;
			}
		}
		for (a = 0; a < 8; a++)
		{
			if (arr3[a] == '1')
			{
				multi = 1;
				for (b = 0; b < a; b++)
				{
					multi *= 2;
				}
				result3 += multi;
			}
		}
		for (a = 0; a < 8; a++)
		{
			if (arr4[a] == '1')
			{
				multi = 1;
				for (b = 0; b < a; b++)
				{
					multi *= 2;
				}
				result4 += multi;
			}
		}
		printf("%d.%d.%d.%d\n", result1, result2, result3, result4);
	}
	return 0;
}