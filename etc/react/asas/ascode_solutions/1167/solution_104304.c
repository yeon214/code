#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int x, y, check = 0;
		char arr[81] = { 0 };
		scanf("%d %d %s", &x, &y, arr);
		int len = strlen(arr);
		for (int j = 0; j < len; j++)
		{
			if (arr[j] == '1') y++;
			else if (arr[j] == '2') x++, y++;
			else if (arr[j] == '3') x++;
			else if (arr[j] == '4') x++, y--;
			else if (arr[j] == '5') y--;
			else if (arr[j] == '6') x--, y--;
			else if (arr[j] == '7') x--;
			else if (arr[j] == '8') x--, y++;
			else
			{
				printf("WRONG!\n");
				check++;
				break;
			}
		}
		if (check == 0)
		{
			printf("%d %d\n", x, y);
		}
	}
	return 0;
}