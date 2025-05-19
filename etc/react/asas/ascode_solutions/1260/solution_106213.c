#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc, a, b;
    char arr[] = { 'W', 'X', 'R', 'F', 'S', 'E', 'Z', 'N', 'L', 'B', 'Y', 'K', 'P', 'Q', 'G', 'I', 'M', 'J', 'V', 'T', 'C', 'H', 'D', 'A', 'O', 'U' };
    scanf("%d", &tc);
    while (tc--)
    {
        int s;
        scanf("%d", &s);
        if (s % 2 == 0) s++;
        for (a = 0; a < (s + 1) / 2; a++)
        {
            for (b = 0; b < s-1-a; b++)
            {
                printf(" ");
            }
            if (a == (s + 1) / 2 - 1)
            {
                for (b = a; b >= 0; b--)
                {
                    printf("%c", arr[b]);
                }
            }
            else printf("%c", arr[a]);
            if (a != (s + 1) / 2 - 1)
            {
                for (b = 0; b < a; b++)
                {
                    printf(" ");
                }
            }
            if (a != (s + 1) / 2 - 1)
            {
                for (b = 0; b < a-1; b++)
                {
                    printf(" ");
                }
                if (a) printf("%c", arr[a]);
            }
            if (a == (s + 1) / 2 - 1)
            {
                for (b = 1; b <= s / 2; b++)
                {
                    printf("%c", arr[b]);
                }
            }
            printf("\n");
        }
        for (a = 0; a < s / 2; a++)
        {
            if (a != s / 2 - 1)
            {
                for (b = s / 2 - 2 - a; b >= 0; b--)
                {
                    printf(" ");
                }
                printf("%c", arr[s / 2 + 1 + a]);
                for (b = 0; b <= a; b++)
                {
                    printf(" ");
                }
                if (a != 0)
                {
                    for (b = 0; b < a; b++)
                    {
                        printf(" ");
                    }
                }
                printf("%c", arr[s / 2 - 1 - a]);
                for (b = s / 2 - 2 - a; b >= 0; b--)
                {
                    printf(" ");
                }
                for (b = s / 2 - 2 - a; b > 0; b--)
                {
                    printf(" ");
                }
                printf("%c", arr[s / 2 - 1 - a]);
                for (b = 0; b <= a; b++)
                {
                    printf(" ");
                }
                for (b = 0; b < a; b++)
                {
                    printf(" ");
                }
                printf("%c", arr[s / 2 + 1 + a]);
            }
            else
            {
                for (b = s - 1; b >= s / 2; b--)
                {
                    printf("%c", arr[b]);
                }
                for (b = s / 2 - 1; b >= 0; b--)
                {
                    printf("%c", arr[b]);
                }
                for (b = 1; b <= s / 2; b++)
                {
                    printf("%c", arr[b]);
                }
                for (b = s / 2 + 1; b < s; b++)
                {
                    printf("%c", arr[b]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}