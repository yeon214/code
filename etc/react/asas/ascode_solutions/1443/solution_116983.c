#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc, a, b, i, j, temp, count, max, price, num;
    scanf("%d", &tc);
    while (tc--)
    {
        max = 0, price = 0;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for (i = a; i <= b; i++)
        {
            count = 0, num = i;
            for (; num > 1;count++)
            {
                if (num % 2 == 0) num /= 2;
                else num = num * 3 + 1;
            }
            if (i == a) max = count, price = i;
            else
            {
                if (max < count) max = count, price = i;
            }
        }
        printf("%d %d\n", price, max+1);
    }
    return 0;
}