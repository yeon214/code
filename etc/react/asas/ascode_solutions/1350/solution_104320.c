#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[1001] = { 0 }, result[1001] = { 0 };
		scanf("%s", arr);
		int len = strlen(arr), vowels = 0, check = 0;
		for (int j = 0; j < len; j++)
		{
			result[len - 1 - j] = arr[j];
			if (arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u')
			{
				vowels++;
			}
		}
		for (int j = 0; j < len; j++)
		{
			if (result[j] != arr[j])
			{
				check++; //다르다는 의미
				break;
			}
		}
		if (check == 0)
		{
			printf("Same %d\n", vowels);
		}
		else
		{
			printf("Not_Same %d\n", vowels);
		}
	}
	return 0;
}