#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[1000][1000];
int main(void)
{
    int n, m, q, i , v, a, b;
    char c;
    scanf("%d %d %d", &n, &m, &q);
    while (q--)
    {
        scanf(" %c %d %d", &c, &i, &v);
        if (c == 'R')
        {
            for (a = 0; a < m; a++)
            {
                arr[i - 1][a] += v;
            }
        }
        else
        {
            for (a = 0; a < n; a++)
            {
                arr[a][i - 1] += v;
            }
        }
    }
    for (a = 0; a < n; a++)
    {
        for (b = 0; b < m; b++)
        {
            printf("%d ", arr[a][b]);
        }
        printf("\n");
    }
}