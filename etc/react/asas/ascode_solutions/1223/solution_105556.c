#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dicPlus {
	char wordPlus[21];
	int plus;
}listPlus[10];
struct dicMinus {
	char wordMinus[21];
	int minus;
}listMinus[10];
int main(void)
{
	int p, m, n, a, b, result, check, sentenceCount;
	scanf("%d %d %d", &p, &m, &n);
	for (a = 0; a < p; a++)
	{
		scanf(" %s %d", listPlus[a].wordPlus, &listPlus[a].plus);
	}
	for (a = 0; a < p; a++)
	{
		for (b = 0; b < 20; b++)
		{
			if (listPlus[a].wordPlus[b] >= 'a' && listPlus[a].wordPlus[b] <= 'z')
			{
				listPlus[a].wordPlus[b] -= 32;
			}
		}
	}
	for (a = 0; a < m; a++)
	{
		scanf(" %s %d", listMinus[a].wordMinus, &listMinus[a].minus);
	}
	for (a = 0; a < m; a++)
	{
		for (b = 0; b < 20; b++)
		{
			if (listMinus[a].wordMinus[b] >= 'a' && listMinus[a].wordMinus[b] <= 'z')
			{
				listMinus[a].wordMinus[b] -= 32;
			}
		}
	}
	for (a = 0; a < n; a++) //문장의 개수만큼 반복함
	{
		result = 0, sentenceCount = 0;
		for (;;) //문장이 공백 단위로 들어올 것
		{
			check = 0;
			char sentence[21] = { 0 };
			scanf(" %s", sentence);
			if (sentence[0] == '.') break;
			sentenceCount++;
			for (b = 0; b < 20; b++)
			{
				if (sentence[b] >= 'a' && sentence[b] <= 'z')
				{
					sentence[b] -= 32; //대문자로 변경함
				}
			}
			for (b = 0; b < p; b++)
			{
				if (strcmp(sentence, listPlus[b].wordPlus) == 0)
				{
					result += listPlus[b].plus;
					check++;
					break;
				}
			}
			for (b = 0; b < m; b++)
			{
				if (strcmp(sentence, listMinus[b].wordMinus) == 0)
				{
					result -= listMinus[b].minus;
					check++;
					break;
				}
			}
			if (check == 0)
			{
				result += strlen(sentence);
			}
		}
		if (sentenceCount % 2 == 1) result += 10;
		if (result >= 0)
		{
			printf("%d\n", result);
		}
		else
		{
			printf("FAIL\n");
		}
	}
	return 0;
}