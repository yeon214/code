#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int t;
    char c[] = { 'A','B','C','D','G','K','M','P','S','W' };
    scanf("%d", &t);
    for (int a = 0; a < t; a++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < n / 2; j++)
                {
                    if (i == j)
                    {
                        printf("%c", c[n / 2 - 1 - i]);
                    }
                    else if (i < j)
                    {
                        printf("%c", c[n / 2 - 1 - i]);
                    }
                    else
                    {
                        printf("%c", c[n / 2 - 1 - j]);
                    }
                }
                for (int j = 0; j < n / 2; j++)
                {
                    if (j < n / 2 - i)
                    {
                        printf("%c", c[n / 2 - 1 - i]);
                    }
                    else
                    {
                        printf("%c", c[j]);
                    }
                }
                printf("\n");
            }
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < n / 2; j++)
                {
                    if (j < n / 2 - i)
                    {
                        printf("%c", c[n / 2 - 1 - j]);
                    }
                    else
                    {
                        printf("%c", c[i]);
                    }
                }
                for (int j = 0; j <= i; j++)
                {
                    printf("%c", c[i]);
                }
                for (int j = 0; j < n / 2 - 1 - i; j++)
                {
                    printf("%c", c[j + i+1]);
                }
                printf("\n");
            }
        }
        else
        {
            for (int i = 0; i <= n / 2; i++)
            {
                for (int j = 0; j <= n / 2; j++)
                {
                    if (i >= j)
                    {
                        printf("%c", c[n / 2 - j]);
                    }
                    else
                    {
                        printf("%c", c[n / 2 - i]);
                    }
                }
                for (int j = 0; j < n / 2; j++)
                {
                    if (i < n / 2 - j)
                    {
                        printf("%c", c[n / 2 - i]);
                    }
                    else
                    {
                        printf("%c", c[1 + j]);
                    }
                }
                printf("\n");
            }
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j <= n / 2; j++)
                {
                    if (j < n / 2-i)
                    {
                        printf("%c", c[n / 2 - j]);
                    }
                    else
                    {
                        printf("%c", c[i + 1]);
                    }
                }
                for (int j = 0; j <= i; j++)
                {
                    printf("%c", c[1 + i]);
                }
                for (int j = 0; j < n / 2 -1 - i; j++)
                {
                    printf("%c", c[2 + j+i]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}