#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (;;)
    {
        int m, n, c=1, temp = 0;
        scanf("%d %d", &m, &n);
        if ((m == 0) && (n == 0))
        {
            break;
        }
        if (m > n)
        {
            temp = m;
            m = n;
            n = temp;
        }
        if (n - m < 2)
        {
            printf("No Twin Primes!\n");
        }
        else
        {
            int a=0;
            for (int i = m; i <= n-2; i++)
            {
                int count = 0, count2 = 0;
                for (int j = 2; j < i; j++)
                {
                    if (i % j == 0)
                    {
                        count++;
                        break;
                    }
                }
                if (count == 0)
                {
                    for (int j = 2; j < i + 2; j++)
                    {
                        if ((i + 2) % j == 0)
                        {
                            count2++;
                            break;
                        }
                    }
                    if (count2 == 0)
                    {

                        printf("%d:(%d,%d)\n", c, i, i + 2);
                        c++, a++;
                    }
                }
            }
            if (a == 0)
            {
                printf("No Twin Primes!\n");
            }
        }
    }
}
