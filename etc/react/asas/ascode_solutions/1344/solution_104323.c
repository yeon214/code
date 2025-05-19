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
		int lenN1 = strlen(n1), lenN2 = strlen(n2), longLen = 0, check = 0;
		if (lenN1 > lenN2) longLen = lenN1;
		else longLen = lenN2;
		for (int j = 0; j < longLen; j++)
		{
			if (n1[j] == 0) n1[j] = 77;
			if (n2[j] == 0) n2[j] = 77;
		}
		for (int j = 0; j < longLen; j++)
		{
			if (n1[j] != n2[j])
			{
				check++;
				break;
			}
		}
		if (check == 0)
		{
			printf("Same person!\n");
		}
		else
		{
			int result = 0;
			for (int j = 0; j < longLen; j++)
			{
				result += abs((n1[j] - 'A') - (n2[j] - 'A'));
			}
			printf("%d\n", result);
		}
	}
	return 0;
}