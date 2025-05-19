#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
	int tc, a, r, b;
	char key[] = "@@@@@@@@@@";
	scanf("%d", &tc);
	for (a = 0; a < tc; a++)
	{
		char arr[20][11] = { 0 };
		scanf("%d", &r);
		for (b = 0; b < r; b++)
		{
			scanf("%s", arr[b]);
		}
		for (b = 0; b < r; b++)
		{
			if (strcmp(key, arr[b]))
			{
				printf("%s\n", arr[b]);
			}
		}
	}
	return 0;
}