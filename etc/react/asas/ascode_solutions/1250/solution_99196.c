#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char c[7] = { 0 }, real[7] = { 0 };
		int len, a, b, sum, lenResult, check = 0; //a에 c, b에 real;
		char result[11] = { 0 };
		scanf("%s", c);
		len = strlen(c);
		for (int j = 0; j < len; j++)
		{
			real[len - j - 1] = c[j];
		} //c배열을 real에 뒤집어서 저장
		a = atoi(c);
		b = atoi(real);
		sum = a + b;
		sprintf(result, "%d", sum);
		lenResult = strlen(result);
		for (int j = 0; j < lenResult / 2; j++)
		{
			if (result[j] == result[lenResult - j - 1])
			{
				check++;
			}
			else
			{
				break;
			}
		}
		if ((lenResult / 2) == check)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}