#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //원문이 키보다 짧을 경우는 일단 생각 안하고 코드를 짰음
int main(void)
{
    int tc, a, b;
    scanf("%d", &tc);
    while (tc--)
    {
        char key[11], secret[501], reset[501];
        scanf("%s %s", key, secret);
        int lenKey = strlen(key), lenSecret = strlen(secret), count = 0;
        for (a = 0; a < lenKey; a++)
        {
            if (key[a] >= 'a' && key[a] <= 'z')
            {
                key[a] -= 32;
            }
        }
        for (a = 0; a < lenSecret; a++)
        {
            if (secret[a] >= 'a' && secret[a] <= 'z')
            {
                secret[a] -= 32;
            }
        }
        if (lenKey != lenSecret)
        {
            for (;;)
            {
                if (count == lenSecret) break;
                for (a = 0; a < lenKey; a++)
                {
                    if (count == lenSecret) break;
                    reset[count++] = key[a];
                }
            }
            for (a = 0; a < lenSecret; a++)
            {
                if (reset[a] - 'A' + secret[a] - 'A' >= 26)
                {
                    printf("%c", reset[a] - 'A' + secret[a] - 'A' - 26 + 'A');
                }
                else printf("%c", reset[a] - 'A' + secret[a] - 'A' + 'A');
            }
        }
        else
        {
            for (a = 0; a < lenSecret; a++)
            {
                if (key[a] - 'A' + secret[a] - 'A' >= 26)
                {
                    printf("%c", key[a] - 'A' + secret[a] - 'A' - 26 + 'A');
                }
                else printf("%c", key[a] - 'A' + secret[a] - 'A' + 'A');
            }
        }
        printf("\n");
    }
    return 0;
}