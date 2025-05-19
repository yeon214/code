#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m, n, count = 0;
        scanf("%d %d", &m, &n);
        if (m == 1)
        {
            count++;
        }
        for (int j = m; j <= n; j++)
        {
            int sum = 0;
            for (int k = 2; k <= sqrt(j); k++)
            {
                if (k * k == j)
                {
                    sum += k;
                }
                else if (j % k == 0)
                {
                    sum += k;
                    sum += j / k;
                }
            }
            if (sum+1 < j)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}