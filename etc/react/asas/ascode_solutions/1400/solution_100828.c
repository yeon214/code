#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int w, h, arr[300][300] = { 0 }, s, sum=0, result = 0;
        scanf("%d %d", &w, &h);
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        }
        scanf("%d", &s);
        for (int j = 0; j <= h-s; j++)
        {
            for (int k = 0; k <= w-s; k++)
            {
                sum = 0;
                for (int a = j; a < j+s; a++)
                {
                    for (int b = k; b < k+s; b++)
                    {
                        sum += arr[a][b];
                    }
                }
                if (sum > result)
                {
                    result = sum;
                }
            }
        }
        printf("%d\n", result);
    }
    return 0;
}