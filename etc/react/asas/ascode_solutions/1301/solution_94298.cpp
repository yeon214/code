#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m, real[12] = { 0 };
        int arr[12][15] = { 0 };
        scanf("%d %d", &n, &m);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        }
        int realmax = 0, realmin = 0;
        for (int j = 0; j < n; j++)
        {
            int max = 0;
            for (int k = 0; k < m; k++)
            {
                if ((j == 0) && (k == 0))
                {
                    realmax = arr[j][k];
                    realmin = arr[j][k];
                    max = arr[j][k];
                }
                else
                {
                    if (realmax < arr[j][k])
                    {
                        realmax = arr[j][k];
                    }
                    if (realmin > arr[j][k])
                    {
                        realmin = arr[j][k];
                    }
                    if (max < arr[j][k])
                    {
                        max = arr[j][k];
                    }
                }
            }
            real[j] = max;
        }
        printf("%d %d\n", realmax, realmin);
        int temp = 0;
        for (int j = 0; j < n-1; j++)
        {
            for (int k = 0; k < n - 1 - j; k++)
            {
                if (real[k] > real[k + 1])
                {
                    temp = real[k];
                    real[k] = real[k + 1];
                    real[k + 1] = temp;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", real[j]);
        }
        printf("\n");
    }

    return 0;
}