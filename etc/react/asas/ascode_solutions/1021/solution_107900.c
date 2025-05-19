#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, a;
	char length[1024], key[512], retry[1024];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%s %s", length, key);
		int lenLength = strlen(length), lenKey = strlen(key), a, count = 0, flag = 0;
		if (lenLength != lenKey)
		{
			for (;;)
			{
                if (flag) break;
				for (a = 0; a < lenKey; a++)
				{
					if (count == lenLength)
                    {
                        flag++;
                        break;
}
					retry[count++] = key[a];
				}
			}
			for (a = 0; a < lenLength; a++)
			{
				printf("%c", length[a] ^ retry[a]);
			}
			printf("\n");
		}
		else
		{
			for (a = 0; a < lenLength; a++)
			{
				printf("%c", length[a] ^ key[a]);
			}
			printf("\n");
		}
	}
	return 0;
}