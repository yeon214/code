#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		char arr1[100] = { 0 }, arr2[100] = { 0 }, result[100] = { 0 };
		scanf("%s %s", arr1, arr2);
		int lenArr1 = strlen(arr1), a, temp, index = 0, longLen, flag = 0;
		for (a = 0; a < lenArr1 / 2; a++)
		{
			temp = arr1[a];
			arr1[a] = arr1[lenArr1 - a - 1];
			arr1[lenArr1 - a - 1] = temp;
		}
		int lenArr2 = strlen(arr2);
		for (a = 0; a < lenArr2 / 2; a++)
		{
			temp = arr2[a];
			arr2[a] = arr2[lenArr2 - a - 1];
			arr2[lenArr2 - a - 1] = temp;
		}
		if (lenArr1 > lenArr2) longLen = lenArr1;
		else longLen = lenArr2;
		for (a = 0; a < longLen; a++)
		{
			if (arr1[a] == 0) arr1[a] = 48;
			if (arr2[a] == 0) arr2[a] = 48;
			if ((arr1[a] - '0') + (arr2[a] - '0') + result[a] < 10)
			{
				result[a] += (arr1[a] - '0') + (arr2[a] - '0');
			}
			else
			{
				if (a == longLen - 1) flag++;
				int sum = (arr1[a] - '0') + (arr2[a] - '0') + result[a];
				result[a] = sum % 10;
				result[a + 1] = sum / 10;
			}
		}
		for (a = longLen - 1 + flag; a >= 0; a--)
		{
			printf("%d", result[a]);
		}
		printf("\n");
	}
}