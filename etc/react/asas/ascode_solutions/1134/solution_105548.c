#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dic {
	char english[21];
	int score;
}list[10];
int main(void)
{
	int m, n, a, b, result = 0, count = 0, check = 0;
	scanf("%d %d", &m, &n);
	for (a = 0; a < m; a++)
	{
		scanf(" %s %d", list[a].english, &list[a].score);
	}
	for (a = 0; a < m; a++)
	{
		for (b = 0; b < 20; b++)
		{
			if (list[a].english[b] >= 'a' && list[a].english[b] <= 'z')
			{
				list[a].english[b] -= 32;
			}
		}
	}
	for (a = 0; a < n; a++)
	{
		result = 0, count = 0; // check 감점 단어가 포함되어있는지 확인
		char sentence[21] = { 0 };
		for (;;)
		{
			check = 0;
			scanf(" %s", sentence);
			if (sentence[0] == '.') break;
			for (b = 0; b < 20; b++)
			{
				if (sentence[b] >= 'a' && sentence[b] <= 'z')
				{
					sentence[b] -= 32;
				}
			}
			for (b = 0; b < m; b++)
			{
				if (strcmp(sentence, list[b].english) == 0)
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
		if (count)
		{
			if (result / count >= 0)
			{
				printf("%d\n", result / count);
			}
			else
			{
				printf("Fail\n");
			}
		}
		else
		{
			printf("Fail\n");
		}
	}
	return 0;
}