#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char c[100];
		scanf("%s", c);
		if (strlen(c) % 2 == 0)
		{
			printf("%c%c\n", c[0], c[strlen(c) - 1]);
		}
		else
		{
			printf("%c%c%c\n", c[0],c[strlen(c)/2], c[strlen(c) - 1]);
		}
	}
	return 0;
}