#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int x, y;
		char arr[51] = { 0 };
		scanf("%d %d %s", &x, &y, arr);
		int len = strlen(arr);
		for (int j = 0; j < len; j++)
		{
			if (arr[j] == 'L' || arr[j] == 'l')
			{
				x--;
			}
			if (arr[j] == 'R' || arr[j] == 'r')
			{
				x++;
			}
			if (arr[j] == 'U' || arr[j] == 'u')
			{
				y++;
			}
			if (arr[j] == 'D' || arr[j] == 'd')
			{
				y--;
			}
		}
		if (x <= 0 || y <= 0)
		{
			printf("Incorrect Position!\n");
		}
		else
		{
			printf("%d %d\n", x, y);
		}
	}
	return 0;
}