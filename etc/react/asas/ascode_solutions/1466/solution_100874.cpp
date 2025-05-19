#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int m;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                if (i * i + j * j == k * k)
                {
                    if (i <= j)
                    {
                        printf("%d, %d, %d\n", i, j, k);
                    }
                }
            }
        }
    }
    return 0;
}