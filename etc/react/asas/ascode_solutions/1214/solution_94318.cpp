#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int arr[10][10] = { 0 }, real[20] = { 0 };
        int n, m;
        scanf("%d %d", &n, &m);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        }
        for (int j = 0; j < n; j++)
        {
            int max = 0, min = 0;
            for (int k = 0; k < m; k++)
            {
                if ((max == 0) && (min == 0))
                {
                    max = arr[j][k];
                    min = arr[j][k];
                }
                else
                {
                    if (max < arr[j][k])
                    {
                        max = arr[j][k];
                    }
                    if (min > arr[j][k])
                    {
                        min = arr[j][k];
                    }
                }
            }
            real[2 * j] = max;
            real[2 * j + 1] = min;
        }
        int temp = 0;
        for (int j = 0; j < 19; j++)
        {
            for (int k = 0; k < 19 - j; k++)
            {
                if (real[k] < real[k + 1])
                {
                    temp = real[k] ;
                    real[k] = real[k + 1];
                    real[k + 1] = temp;
                }
            }
        }
        for (int j = 0; j < 20; j++)
        {
            if (real[j] != 0)
            {
                printf("%d ", real[j]);
            }
        }
        printf("\n");
    }
    return 0;
}