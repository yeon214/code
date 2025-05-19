#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, a;
	char arr[1025];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%s", arr);
		int len = strlen(arr), count = 0;
		for (a = 0; a <= len-8; a++)
		{
			if (arr[a] == 'c' && arr[a + 1] == 'h' && arr[a + 2] == 'a' && arr[a + 3] == 'r' && arr[a + 4] == 'c' && arr[a + 5] == 'h' && arr[a + 6] == 'a' && arr[a + 7] == 'r')
			{
				arr[a] = 0, arr[a + 1] = 0, arr[a + 2] = 0, arr[a + 3] = 0, arr[a + 4] = 0, arr[a + 5] = 0, arr[a + 6] = 0, arr[a + 7] = 0;
			}
		}
		for (a = 0; a < len; a++)
		{
			if (arr[a])
			{
				count++;
				break;
			}
		}
		if (count)
		{
			for (a = 0; a < len; a++)
			{
				if (arr[a]) printf("%c", arr[a]);
			}
		}
		else printf("i hate charchar");
		printf("\n");
	}
	return 0;
}