#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		char word1[21] = { 0 }, word2[21] = { 0 };
		scanf(" %s %s", word1, word2);
		int len1 = strlen(word1), len2 = strlen(word2), a, b, temp = 0;
		if (len1 == len2)
		{
			for (a = 0; a < len1; a++)
			{
				if (word1[a] >= 'a' && word1[a] <= 'z')
				{
					word1[a] -= 32;
				}
				if (word2[a] >= 'a' && word2[a] <= 'z')
				{
					word2[a] -= 32;
				}
			}
			for (a = 0; a < len1 - 1; a++)
			{
				for (b = 0; b < len1 - 1 - a; b++)
				{
					if (word1[b] > word1[b + 1])
					{
						temp = word1[b];
						word1[b] = word1[b + 1];
						word1[b + 1] = temp;
					}
					if (word2[b] > word2[b + 1])
					{
						temp = word2[b];
						word2[b] = word2[b + 1];
						word2[b + 1] = temp;
					}
				}
			}
			if (strcmp(word1, word2) == 0)
			{
				printf("True\n");
			}
			else
			{
				printf("False\n");
			}
		}
		else
		{
			printf("Different size\n");
		}
	}
	return 0;
}