#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[1025] = { 0 }, result[1025] = { 0 };
		int count = 0;
		scanf("%s", arr);
		int len = strlen(arr);
		for (int j = 0; j < len; j++)
		{
			if ((arr[j] == 'c' || arr[j]=='C') && (arr[j + 1] == 'h' || arr[j + 1] == 'H') && (arr[j + 2] == 'a' || arr[j+2]=='A') && (arr[j + 3] == 'r' || arr[j + 3] == 'R'))
			{
				count++;
				j += 3;
			}
		}
		int index = 0;
		if (count >= 2)
		{
			for (int j = 0; j < len; j++)
			{
				if ((arr[j] == 'c' || arr[j] == 'C') && (arr[j + 1] == 'h' || arr[j + 1] == 'H') && (arr[j + 2] == 'a' || arr[j + 2] == 'A') && (arr[j + 3] == 'r' || arr[j + 3] == 'R'))
				{
					j += 3;
				}
				else
				{
					result[index] = arr[j];
					index++;
				}
			}
			if (strlen(result) == 0)
			{
				printf("I Hate CharChar!\n");
			}
			else
			{
				printf("%s\n", result);
			}
		}
		else
		{
			printf("%s\n", arr);
		}
	}
	return 0;
}