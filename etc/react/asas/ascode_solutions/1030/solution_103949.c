#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[1025] = { 0 };
		scanf("%s", arr);
		int len = strlen(arr), count = 0;
		for (int j = 0; j < len; j++)
		{
			count = 0;
			if (arr[j] == 'c' && arr[j+1]=='h'&&arr[j+2]=='a'&&arr[j+3]=='r'&& arr[j+4] == 'c' && arr[j + 5] == 'h' && arr[j + 6] == 'a' && arr[j + 7] == 'r')
			{
				int num = j;
				for (int k = num; k < num+8; k++)
				{
					arr[k] = '0';
				}
			}
		}
		int result = 0;
		for (int j = 0; j < len; j++)
		{
			if (arr[j] != '0')
			{
				result++;
				break;
			}
		}
		if (result == 0)
		{
			printf("i hate charchar\n");
		}
		else
		{
			for (int j = 0; j < len; j++)
			{
				if (arr[j] != '0')
				{
					printf("%c", arr[j]);
				}
			}
		}
		printf("\n");
	}

	return 0;
}