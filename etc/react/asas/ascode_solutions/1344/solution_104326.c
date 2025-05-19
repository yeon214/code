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
		char n1[31] = { 0 }, n2[31] = { 0 };
		scanf("%s %s", n1, n2);
		int lenN1 = strlen(n1), lenN2 = strlen(n2), longLen = 0, flag = 0;
		if (lenN1 == lenN2) longLen = lenN1, flag = 0;
		else if (lenN1 > lenN2) longLen = lenN1 ,flag = 1;
		else longLen = lenN2, flag = 1;
		for (int j = 0; j < longLen; j++)
		{
			if (n1[j] == 0) n1[j] = 77;
			if (n2[j] == 0) n2[j] = 77;
		}
		int result = 0;
		for (int j = 0; j < longLen; j++)
		{
			result += abs((n1[j] - 'A') - (n2[j] - 'A'));
		}
		if (flag == 0 && result == 0)
		{
			printf("Same person!\n");
		}
		else
		{
			printf("%d\n", result);
		}
	}
	return 0;
}