#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int num1, num2, num3, num4, index = 0, a;
		int arrNum1[8] = { 0 }, arrNum2[8] = { 0 }, arrNum3[8] = { 0 }, arrNum4[8] = { 0 };
		scanf("%d.%d.%d.%d", &num1, &num2, &num3, &num4);
		while (num1 > 0)
		{
			arrNum1[index] = num1 % 2;
			index++;
			num1 /= 2;
		}
		index = 0;
		while (num2 > 0)
		{
			arrNum2[index] = num2 % 2;
			index++;
			num2 /= 2;
		}
		index = 0;
		while (num3 > 0)
		{
			arrNum3[index] = num3 % 2;
			index++;
			num3 /= 2;
		}
		index = 0;
		while (num4 > 0)
		{
			arrNum4[index] = num4 % 2;
			index++;
			num4 /= 2;
		}
		for (a = 7; a >= 0; a--)
		{
			printf("%d", arrNum1[a]);
		}
		for (a = 7; a >= 0; a--)
		{
			printf("%d", arrNum2[a]);
		}
		for (a = 7; a >= 0; a--)
		{
			printf("%d", arrNum3[a]);
		}
		for (a = 7; a >= 0; a--)
		{
			printf("%d", arrNum4[a]);
		}
		printf("\n");
	}
}