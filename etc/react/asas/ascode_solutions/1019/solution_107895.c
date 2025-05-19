#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, a;
	char length[1025];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%s", length);
		int len = strlen(length);
		for (a = 0; a < len; a++)
		{
			if (length[a] == 'Z') printf("A");
			else printf("%c", length[a] + 1);
		}
		printf("\n");
	}
	return 0;
}