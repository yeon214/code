#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //대소문자 구별하는지 안하는지 안알려줌
struct MyStruct
{
	char word[21];
	int num;
}list[15];
int main(void)
{
	int p, n, a, check, result, b;
	scanf("%d %d", &p, &n);
	for (a = 0; a < p; a++)
	{
		scanf(" %s %d", list[a].word, &list[a].num);
	}
	for (a = 0; a < n; a++) //문장만큼 반복
	{
		result = 0;
		for (;;)
		{
			check = 0;
			char sentence[21] = { 0 };
			scanf(" %s", sentence);
			if (sentence[0] == '.') break;
			for (b = 0; b < p; b++)
			{
				if (strcmp(sentence, list[b].word) == 0)
				{
					result += list[b].num;
					check++;
					break;
				}
			}
			if (check == 0 && strlen(sentence)%4==0)
			{
				result += 2;
			}
		}
		if (result >= 100) printf("Perfect!\n");
		else printf("%d\n", result);
	}
	return 0;
}