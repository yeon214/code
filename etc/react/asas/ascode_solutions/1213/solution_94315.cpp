#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, c= 65;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n - 1 - j; k++)
            {
                printf(" ");
            }
            for (int k = 0; k <= j; k++)
            {
                printf("%c", c + n-k - 1);
            }
            for (int k = 0; k < j; k++)
            {
                printf("%c", c + n  - j+k);
            }
            printf("\n");
        }
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                printf(" ");
            }
            for (int k = 0; k < n-1-j; k++)
            {
                printf("%c", c + n - 1 - k);
            }
            for (int k = 0; k < n-2-j; k++)
            {
                printf("%c", 67 + k + j);
            }
            printf("\n");
        }
    }
    return 0;
}