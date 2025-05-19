#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct plus
{
	char word[21];
	int score;
}list[15];
int main(void)
{
	int p, n, a, result, b, check;
	char sentence[21];
	scanf("%d %d", &p, &n);
	for (a = 0; a < p; a++)
	{
		scanf("%s %d", list[a].word, &list[a].score);
	}
	for (a = 0; a < n; a++)
	{
		result = 0;
		for (;;)
		{
			scanf("%s", sentence);
			int lenSentence = strlen(sentence);
			check = 0;
			if (sentence[0] == '.' && lenSentence == 1) break;
			for (b = 0; b < p; b++)
			{
				if (strcmp(sentence, list[b].word) == 0)
				{
					result += list[b].score;
					check++;
					break;
				}
			}
			if (check == 0 && lenSentence % 4 == 0)
			{
				result += 2;
			}
		}
		if (result >= 100) printf("Perfect!\n");
		else printf("%d\n", result);
	}
	return 0;
}