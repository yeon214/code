#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n, a, b, character = 65, change = 0;
    for (; scanf("%d", &n) != EOF;)
    {
        for (a = 0; a < n; a++)
        {
            for (b = n - 1 - a; b > 0; b--)
            {
                printf(" ");
            }
            for (b = 0; b <= a; b++)
            {
                printf("%c", character + n - 1 - b);
            }
            for (b = 0; b < a; b++)
            {
                printf("%c", character + n - a + b);
            }
            printf("\n");
        }
        for (a = 0; a < n - 1; a++)
        {
            for (b = 0; b <= a; b++)
            {
                printf(" ");
            }
            for (b = 0; b < n - 1 - a; b++)
            {
                printf("%c", character + n - 1 - b);
            }
            for (b = 0; b < n - 2 - a; b++)
            {
                printf("%c", character + 2 + b + a);
            }
            printf("\n");
        } //다이아 끝
        for (a = 0; a < n; a++)
        {
            change = 0;
            for (b = 0; b < n; b++)
            {
                printf("%c", character + n - 1 - change);
                if (a > b) change++;
            }
            change = 0;
            for (b = 0; b < n - 1; b++)
            {
                if (a == n - 1)
                {
                    printf("%c", character + n- a + change);
                }
                else printf("%c", character + n - 1 - a + change);               
                if (a + b >= n-2) change++;
            }
            printf("\n");
        }
        for (a = 0; a < n - 1; a++)
        {
            change = 0;
            for (b = 0; b < n; b++)
            {
                printf("%c", character + n - 1 - change);
                if (a + b <= n - 3) change++;
            }
            change = 0;
            for (b = 0; b < n - 1; b++)
            {
                printf("%c", character + 1 + a + change);
                if (a <= b) change++;
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("END.");
    return 0;
}