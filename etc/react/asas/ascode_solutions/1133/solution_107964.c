#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct english
{
	char word[26];
	int n;
}list[10];
int main(void)
{
	int m, n, a, b;
	char sentence[26];
	scanf("%d %d", &m, &n);
	for (a = 0; a < m; a++)
	{
		scanf("%s %d", list[a].word, &list[a].n);
	}
	for (a = 0; a < n; a++)
	{
		int score = 0, count = 0, check;
		for (;;count++)
		{
			check = 0;
			scanf("%s", sentence);
			int len = strlen(sentence);
			if (len == 1 && sentence[0] == '.') break;
			for (b = 0; b < m; b++)
			{
				if (strcmp(sentence, list[b].word) == 0)
				{
					score -= list[b].n, check++;
					break;
				}
			}
			if (check == 0 && count == 0)
			{
				if (sentence[0] < 'A' || sentence[0] > 'Z')
				{
					score -= 5;
				}
				else score += strlen(sentence);
			}
			else if (check==0)
			{
				score += strlen(sentence);
			}
		}
		if (score >= 0) printf("%d\n", score);
		else printf("Fail\n");
	}
	return 0;
}