#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) 
{
    for (;;)
    {
        int n, check1 = 0, check2 = 0, result =0;
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = n-2; i > 1; i--)
        {
            check1 = 0, check2 = 0;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    check1++;
                    break;
                }
            }
            if (check1 == 0 && (n-i!=1))
            {
                for (int j = 2; j <= sqrt(n-i); j++)
                {
                    if ((n - i) % j == 0)
                    {
                        check2++;
                        break;
                    }
                }
            }
            if (check1 == 0 && check2 == 0)
            {
                result++;
                printf("%d = %d + %d\n", n, n - i, i);
                break;
            }
        }
        if (result == 0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}