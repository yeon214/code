#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct english
{
	char word[21];
	int score;
}list[10];
int main(void)
{
	int m, n, a, b, result, check, count;
	char sentence[21];
	scanf("%d %d", &m, &n);
	for (a = 0; a < m; a++)
	{
		scanf("%s %d", list[a].word, &list[a].score);
	}
	for (a = 0; a < m; a++)
	{
		int lenWord = strlen(list[a].word);
		for (b = 0; b < lenWord; b++)
		{
			if (list[a].word[b] >='a' && list[a].word[b]<='z')
			{
				list[a].word[b] -= 32; //모두 대문자로 변경
			}
		}
	}
	for (a = 0; a < n; a++)
	{
		result = 0, count = 0;
		for (;;)
		{
			scanf("%s", sentence);
			int len = strlen(sentence), check = 0;
			if (sentence[0] == '.' && len == 1) break;
			for (b = 0; b < len; b++)
			{
				if (sentence[b] >= 'a' && sentence[b] <= 'z')
				{
					sentence[b] -= 32; //모두 대문자로 변경
				}
			}
			for (b = 0; b < m; b++)
			{
				if (strcmp(sentence, list[b].word) == 0)
				{
					result -= list[b].score;
					check++;
					break;
				}
			}
			if (check == 0)
			{
				result += strlen(sentence) * strlen(sentence);
				count++;
			}
		}
		if (result >= 0)
		{
			printf("%d\n", result / count);
		}
		else printf("Fail\n");
	}

	return 0;
}