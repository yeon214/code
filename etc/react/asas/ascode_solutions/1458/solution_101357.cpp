#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, count = 0;
        scanf("%d", &n);
        if (n == 2 || n == 3) printf("%d", n);
        else
        {
            for (int j = n; j >= 2; j--)
            {
                count = 0;
                for (int k = 2; k <= sqrt(j); k++)
                {
                    if (j % k == 0)
                    {
                        count++; //소수 아님
                        break;
                    }
                }
                if (count == 0)
                {
                    if (n % j == 0)
                    {
                        for (;;)
                        {
                            if (n % j != 0) break;
                            printf("%d ", j);
                            n /= j;
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}