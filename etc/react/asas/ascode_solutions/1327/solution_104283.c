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
			if (arr[j] == 'L')
			{
				x--;
			}
			else if (arr[j] == 'R')
			{
				x++;
			}
			else if (arr[j] == 'U')
			{
				y++;
			}
			else if (arr[j] == 'D')
			{
				y--;
			}
		}
		printf("%d %d\n", x, y);
	}
	return 0;
}