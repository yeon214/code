#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m, n, arr[20][20] = { 0 };
        char c;
        scanf("%d %d", &m, &n);
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf(" %c", &c);
                if (c == '*')
                {
                    arr[j][k] = -10;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[j][k] < 0)
                {
                    for (int a = j - 1; a <= j+1; a++)
                    {
                        for (int b = k - 1; b <= k + 1; b++)
                        {
                            if ((a >= 0 && a < m) && (b >= 0 && b < n))
                            {
                                arr[a][b]++;
                            }
                        }
                    }
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[j][k] < 0)
                {
                    printf("*");
                }
                else if (arr[j][k] == 0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            printf("\n");
        }
    }
    return 0;
}