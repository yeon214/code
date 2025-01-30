#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		char arr1[101], arr2[101], result[101];
		scanf("%s %s", arr1, arr2);
		int len = strlen(arr1), a;
		for (a = 0; a < len; a++)
		{
			if (arr1[a] == arr2[a]) result[a] = '0';
			else result[a] = '1';
		}
		for (a = 0; a < len; a++)
		{
			printf("%c", result[a]);
		}
		printf("\n");
	}
	return 0;
}
