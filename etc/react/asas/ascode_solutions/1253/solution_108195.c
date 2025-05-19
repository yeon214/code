#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, result1, result2, result3, result4, a, b, change;
	char arr1[9], arr2[9], arr3[9], arr4[9];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d.%d.%d.%d", &result1, &result2, &result3, &result4);
		change = result1;
		for (a = 7; a >= 0; a--)
		{
			arr1[a] = change % 2+'0';
			change /= 2;
		}
		change = result2;
		for (a = 7; a >= 0; a--)
		{
			arr2[a] = change % 2 + '0';
			change /= 2;
		}
		change = result3;
		for (a = 7; a >= 0; a--)
		{
			arr3[a] = change % 2 + '0';
			change /= 2;
		}
		change = result4;
		for (a = 7; a >= 0; a--)
		{
			arr4[a] = change % 2 + '0';
			change /= 2;
		}
		for (a = 0; a < 8; a++)
		{
			printf("%c", arr1[a]);
		}
		for (a = 0; a < 8; a++)
		{
			printf("%c", arr2[a]);
		}
		for (a = 0; a < 8; a++)
		{
			printf("%c", arr3[a]);
		}
		for (a = 0; a < 8; a++)
		{
			printf("%c", arr4[a]);
		}
		printf("\n");
	}
	return 0;
}