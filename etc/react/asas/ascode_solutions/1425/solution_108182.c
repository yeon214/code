#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct english
{
	char word[21];
	int score;
}list[15];
int main(void)
{
	int p, n, a, check, result, b, flag;
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
			check = 0, flag = 0;
			if (lenSentence == 1 && sentence[0] == '.') break;
			for (b = 0; b < p; b++)
			{
				if (strcmp(list[b].word, sentence) == 0)
				{
					result += list[b].score, flag++;
					break;
				}
			}
			if (flag == 0)
			{
				for (b = 0; b < lenSentence; b++)
				{
					if (sentence[b] < 'a' || sentence[b]>'z')
					{
						check++;
						break;
					}
				}
				if (check == 0) result += strlen(sentence) / 2;
				else result -= 2;
			}
		}
		if (result >= 100) printf("Perfect!\n");
		else if (result < 60) printf("Fail!\n");
		else printf("%d\n", result);
	}
	return 0;
}