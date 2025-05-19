#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char arr[20][20] = { 0 };
        int result[20][20] = { 0 }, m, n; //m이 세로 n이 가로
        scanf("%d %d", &m, &n);
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf(" %c", &arr[j][k]);
                if (arr[j][k] == 42)
                {
                    result[j][k] = '*';
                }
                else if (arr[j][k] == 35)
                {
                    result[j][k] = '#';
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (result[j][k] == 42)
                {
                    for (int a = j - 1; a <= j + 1; a++)
                    {
                        for (int b = k - 1; b <= k + 1; b++)
                        {
                            if ((a >= 0 && a < m) && (b >= 0 && b < n))
                            {
                                if (a != j || b != k)
                                {
                                    if (arr[a][b] == '.')
                                    {
                                        result[a][b]++;
                                    }
                                }
                            }
                        }
                    }
                }
                else if (result[j][k] == 35)
                {
                    for (int a = j - 2; a <= j + 2; a++)
                    {
                        for (int b = k - 2; b <= k + 2; b++)
                        {
                            if ((a >= 0 && a < m) && (b >= 0 && b < n))
                            {
                                if (a != j || b != k)
                                {
                                    if (arr[a][b] == '.')
                                    {
                                        result[a][b]++;
                                    }
                                }
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
                if (result[j][k] == 42)
                {
                    printf("*");
                }
                else if (result[j][k] == 35)
                {
                    printf("#");
                }
                else if (result[j][k] > 0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }
    }
    return 0;
}