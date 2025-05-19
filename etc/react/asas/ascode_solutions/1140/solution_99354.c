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
		char arr[11] = { 0 }, real[11] = { 0 };
		scanf("%s", arr);
		int lenArr = strlen(arr);
		for (int j = 0; j < lenArr; j++)
		{
			real[lenArr-1 - j] = arr[j];
		}
		int num1 = atoi(arr);
		int num2 = atoi(real);
		if (num1 == num2)
		{
			printf("Yes!\n");
		}
		else
		{
			printf("No...\n");
		}
	}
	return 0;
}