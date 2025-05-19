#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //원문이 키보다 짧을 경우도 들어오려나?
int main(void)
{
	int tc, a, b;
	char key[11], original[501], retry[501];
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%s %s", key, original);
		int lenKey = strlen(key), lenOriginal = strlen(original), count = 0, flag = 0;
		if (lenKey < lenOriginal)
		{
			for (;;)
			{
				if (flag) break;
				for (a = 0; a < lenKey; a++)
				{
					if (count == lenOriginal)
					{
						flag++;
						break;
					}
					retry[count++] = key[a];
				}
			}
		}
		else
		{
			for (a = 0; a < lenKey; a++)
			{
				retry[a] = key[a];
			}
		}
		for (a = 0; a < lenOriginal; a++)
		{
			if (original[a] >= 'a' && original[a] <= 'z')
			{
				original[a] -= 32;
			}
			if (retry[a] >= 'a' && retry[a] <= 'z')
			{
				retry[a] -= 32;
			}
		}
		for (a = 0; a < lenOriginal; a++)
		{
			if (original[a] + retry[a] >= 156)
			{
				printf("%c",original[a] + retry[a] - 91);
			}
			else printf("%c", original[a] + retry[a] - 'A');
		}
		printf("\n");
	}
	return 0;
}