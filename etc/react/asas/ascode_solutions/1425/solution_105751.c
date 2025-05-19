#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct MyStruct
{
	char word[21];
	int score;
}list[15];
int main(void)
{
	int p, n, a, b, count = 0, result, check;
	char sentence[21] = { 0 };
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
			count = 0, check = 0;
			scanf("%s", sentence);
			if (sentence[0] == '.' && strlen(sentence)==1) break;
			for (b = 0; b < p; b++)
			{
				if (strcmp(sentence, list[b].word) == 0)
				{
					result += list[b].score;
					count++;
					/*printf("result %d list[b].score %d sentence %s list[b].word %s count %d\n", result, list[b].score, sentence, list[b].word, count);*/
					break;
				}
			}
			if (count == 0) //list 중에 sentence가 아예 없다는 의미
			{
				for (b = 0; b < strlen(sentence); b++)
				{
					if (sentence[b] < 'a' || sentence[b]>'z')
					{
						result -= 2;
						check++;
						/*printf("sentence[b] %c result %d check %d\n", sentence[b], result, check);*/
						break;
					}
				}
			}
			if (check == 0 && count == 0)
			{
				result += (strlen(sentence)) / 2;
				/*printf("result %d strlen(sentence)/2 %d sentence %s\n", result, (strlen(sentence)) / 2, sentence);*/
			}
		}
		if (result >= 100) printf("Perfect!\n");
		else if (result < 60) printf("Fail!\n");
		else printf("%d\n", result);
	}
}