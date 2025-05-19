#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int tc, a, b;
    scanf("%d", &tc);
    while (tc--)
    {
        char key[11], result[27] = { 0 };
        int english[26] = { 0 }, count = 0;
        scanf("%s", key);
        int lenKey = strlen(key);
        for (a = 0; a < lenKey; a++)
        {
            english[key[a] - 'a']++;
            if (english[key[a] - 'a'] == 1) result[count++] = key[a];
        } 
        for (a = (result[count - 1]) - 'a'+1; a < 26; a++)
        {
            if (english[a] == 0)
            {
                result[count++] = a + 'a';
                english[a]++;
            }
        } 
        for (a = count; a < 26; a++)
        {
            for (b = 0; b < 26; b++)
            {
                if (english[b] == 0)
                {
                    result[count++] = b + 'a';
                    english[b]++;
                    break;
                }
            }
        } //ㅇㅋ
        int c;
        scanf("%d", &c);
        while (c--)
        {
            char message[101];
            scanf("%s", message);
            int lenMessage = strlen(message);
            for (a = 0; a < lenMessage; a++)
            {
                printf("%c", result[message[a]-'a']);
            }
            printf("\n");
        }
    }
    return 0;
}