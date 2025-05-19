#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, r, a;
	char judgment[11] = "@@@@@@@@@@";
	scanf("%d", &tc);
	while (tc--)
	{
		char arr[11];
		scanf("%d", &r);
		for (a = 0; a < r; a++)
		{
			scanf("%s", arr);
			if (strcmp(arr, judgment))
			{
				printf("%s\n", arr);
			}
		}
	}
	return 0;
}