#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    for (;;)
    {
        int n, max = 0, min = 0;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            int m;
            scanf("%d", &m);
            if (i == 0)
            {
                max = m;
                min = m;
            }
            else
            {
                if (max < m)
                {
                    max = m;
                }
                else if (min > m)
                {
                    min = m;
                }
            }
        }
        printf("%d %d\n", max, min);
    }
    return 0;
}