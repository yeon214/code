#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m;
        scanf("%d", &m);
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                for (int p = 1; p <= m; p++)
                {
                    if (j + k + p > m || j * j + k * k < p * p)
                    {
                        break;
                    }
                    else if (j * j + k * k == p * p)
                    {
                        if (j <= k)
                        {
                            printf("%d^2 + %d^2 = %d^2\n", j, k, p);
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}