#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[20000] = { 0 };
		scanf("%s", arr);
		int len = strlen(arr);
		for (int j = 0; j < len; j++)
		{
			arr[j] ^= 32;
		}
		printf("%s\n", arr);
	}

	return 0;
}