#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, c, a, b;
	scanf("%d", &tc);
	while (tc--)
	{
		char key[11], message[101], secret[26]; //소문자만 있대
		int english[26] = { 0 }, index;
		scanf("%s %d", key, &c);
		int lenKey = strlen(key), count = 0;
		for (a = 0; a < lenKey; a++)
		{
			if (english[key[a] - 'a'] == 0)
			{
				secret[count++] = key[a];
				english[key[a] - 'a']++;
			}
		}
		index = secret[count - 1] - 'a';
		for (a = index + 1; a < 26; a++)
		{
			if (english[a] == 0)
			{
				secret[count++] = a + 'a';
				english[secret[count - 1] - 'a']++;
			}
		}
		for (a = 0; a < 26; a++)
		{
			if (english[a] == 0)
			{
				secret[count++] = a + 'a';
				english[a]++;
			}
		}
		while (c--)
		{
			scanf("%s", message);
			int lenMessage = strlen(message);
			for (a = 0; a < lenMessage; a++)
			{
				printf("%c", secret[message[a] - 'a']);
			}
			printf("\n");
		}
	}
	return 0;
}