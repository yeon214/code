#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, num;
        scanf("%d", &n);
        if (n % 2 == 1)
        {
            num = n / 2 + 1;
            for (int j = 0; j < n / 2 + 1; j++)
            {
                for (int k = 0; k < n / 2 + 1; k++)
                {
                    num = n/2+1;
                    if (j < k) num -= j;
                    else num -= k;
                    printf("%d", num);
                }
                num = n / 2 + 1;
                num -= j;
                if (j == n / 2) num++;
                for (int k = 0; k < n / 2; k++)
                {
                    printf("%d", num);
                    if (j + k >= n/2-1) num++;
                }
                printf("\n");
            }
            for (int j = 0; j < n / 2; j++)
            {
                num = n / 2 + 1;
                for (int k = 0; k < n / 2 + 1; k++)
                {
                    printf("%d", num);
                    if (j + k < n / 2 - 1) num--;
                }
                num = 2+ j;
                for (int k = 0; k < n / 2; k++)
                {
                    printf("%d", num);
                    if (j <= k) num++;
                }
                printf("\n");
            }
        }
        else
        {
            for (int j = 0; j < n / 2 ;j++)
            {
                num = n / 2;
                for (int k = 0; k < n / 2; k++)
                {
                    printf("%d", num);
                    if (j > k) num--;
                }
                num = n / 2 - j;
                for (int k = 0; k < n / 2; k++)
                {
                    printf("%d", num);
                    if ((j + k >= n/2-1) && (k!=n/2-1)) num++;
                }
                printf("\n");
            }
            for (int j = 0; j < n / 2; j++)
            {
                num = n / 2;
                for (int k = 0; k < n / 2; k++)
                {
                    printf("%d", num);
                    if (j + k < n/2-1) num--;
                }
                num = j + 1;
                for (int k = 0; k < n / 2; k++)
                {
                    printf("%d", num);
                    if (j <= k) num++;
                }
                printf("\n");
            }
        }
    }
    return 0;
}