#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, temp = 0, max = 0, num = 0;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            temp = b;
            b = a;
            a = temp;
        }
        for (int j = a; j <= b; j++)
        {
            int count = 1;
            for (int k = j;; count++)
            {
                if (k == 1)
                {
                    break;
                }
                else if (k % 2 == 0)
                {
                    k /= 2;
                }
                else
                {
                    k = k * 3 + 1;
                }
            }
            if (j == a)
            {
                max = count;
                num = j;
            }
            else 
            {
                if (max < count)
                {
                    max = count;
                    num = j;
                }
            }
        }
        printf("%d %d\n", num, max);
    }
    return 0;
} 