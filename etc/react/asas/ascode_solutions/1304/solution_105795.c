#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, a, len;
    char sentence[81];
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%s", sentence);
        len = strlen(sentence);
        for (a = 0; a < len; a++)
        {
            if (sentence[a] == '%')
            {
                if (sentence[a + 2] == '0')
                {
                    printf(" ");
                    a += 2;
                }
                else if (sentence[a + 2] == '1')
                {
                    printf("!");
                    a += 2;
                }
                else if (sentence[a + 2] == '4')
                {
                    printf("$");
                    a += 2;
                }
                else if (sentence[a + 2] == '5')
                {
                    printf("%%");
                    a += 2;
                }
                else if (sentence[a + 2] == '8')
                {
                    printf("(");
                    a += 2;
                }
                else if (sentence[a + 2] == '9')
                {
                    printf(")");
                    a += 2;
                }
                else if (sentence[a + 2] == 'a')
                {
                    printf("*");
                    a += 2;
                }
                else
                {
                    printf("%c", sentence[a]);
                }
            }
            else
            {
                printf("%c", sentence[a]);
            }
        }
        printf("\n");
    }
}