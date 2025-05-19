#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int tc, a;
    scanf("%d", &tc);
    while (tc--)
    {
        char data[1024], key[1024], result[1024];
        scanf("%s %s", data, key);
        int lenData = strlen(data), lenKey = strlen(key), count;
        if (lenData == lenKey)
        {
            for (a = 0; a < lenData; a++)
            {
                result[a] = data[a] ^ key[a];
            }
            for (a = 0; a < lenData; a++)
            {
                printf("%c", result[a]);
            }
        }
        else
        {
            count = 0;
            if (lenData > lenKey)
            {
                for (;;)
                {
                    if (count == lenData) break;
                    for (a = 0; a < lenKey; a++)
                    {
                        if (count == lenData) break;
                        key[count++] = key[a];
                    }
                }
            }
            else
            {
                for (;;)
                {
                    if (count == lenKey) break;
                    for (a = 0; a < lenData; a++)
                    {
                        if (count == lenKey) break;
                        data[count++] = data[a];
                    }
                }
            }
            for (a = 0; a < lenData; a++)
            {
                result[a] = data[a] ^ key[a];
            }
            for (a = 0; a < lenData; a++)
            {
                printf("%c", result[a]);
            }
        }
        printf("\n");
    }
    return 0;
}