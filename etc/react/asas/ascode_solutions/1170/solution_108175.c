#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct englishPlus
{
	char wordPlus[21];
	int scorePlus;
}listPlus[10];
struct englishMinus
{
	char wordMinus[21];
	int scoreMinus;
}listMinus[10];
int main(void)
{
	int p, m, n, a, b, result, check, minusCount;
	char sentence[21];
	scanf("%d %d %d", &p, &m, &n);
	for (a = 0; a < p; a++)
	{
		scanf("%s %d", listPlus[a].wordPlus, &listPlus[a].scorePlus);
	}
	for (a = 0; a < p; a++)
	{
		int lenWordPlus = strlen(listPlus[a].wordPlus);
		for (b = 0; b < lenWordPlus; b++)
		{
			if (listPlus[a].wordPlus[b] >= 'a' && listPlus[a].wordPlus[b] <= 'z')
			{
				listPlus[a].wordPlus[b] -= 32;
			}
		}
	}
	for (a = 0; a < m; a++)
	{
		scanf("%s %d", listMinus[a].wordMinus, &listMinus[a].scoreMinus);
	}
	for (a = 0; a < p; a++)
	{
		int lenWordMinus = strlen(listMinus[a].wordMinus);
		for (b = 0; b < lenWordMinus; b++)
		{
			if (listMinus[a].wordMinus[b] >= 'a' && listMinus[a].wordMinus[b] <= 'z')
			{
				listMinus[a].wordMinus[b] -= 32;
			}
		}
	}
	for (a = 0; a < n; a++)
	{
		result = 0, minusCount = 0;
		for (;;)
		{
			scanf("%s", sentence);
			int lenSentence = strlen(sentence);
			check = 0;
			if (lenSentence == 1 && sentence[0] == '.') break;
			for (b = 0; b < lenSentence; b++)
			{
				if (sentence[b] >= 'a' && sentence[b] <= 'z')
				{
					sentence[b] -= 32;
				}
			}
			for (b = 0; b < p; b++)
			{
				if (strcmp(listPlus[b].wordPlus, sentence) == 0)
				{
					result += listPlus[b].scorePlus;
					check++;
					break;
				}
			}
			for (b = 0; b < m; b++)
			{
				if (strcmp(listMinus[b].wordMinus, sentence) == 0)
				{
					result -= listMinus[b].scoreMinus;
					check++, minusCount++;
					break;
				}
			}
			if (check == 0)
			{
				result += strlen(sentence);
			}
		}
		if (result > 0 && minusCount)
		{
			printf("%d\n", result / minusCount);
		}
		else if (result > 0 && minusCount == 0)
		{
			printf("%d\n", result);
		}
		else printf("FAIL\n");
	}
	return 0;
}