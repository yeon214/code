#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) //미주의 조교생활 코드
{
    int tc, n, character, a, b, count;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d", &n);
        count = 0;
        for (a = 0; a < n; a++)
        {
            if (n % 2 == 1)character = 64;
            else character = 96;
            if (a != 0)
            {
                if (a % 2 == 1)
                {
                    character += (a - count);
                    count++;
                }
                else character += (a - count);
            }
            for (b = 0; b < n; b++)
            {
                if ((a + b) % 2 == 0)
                {
                    printf("%c", ++character);
                }
                else printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}