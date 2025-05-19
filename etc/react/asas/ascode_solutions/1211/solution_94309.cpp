#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int price, day = 0, count = 0;
        scanf("%d", &price);
        for (; price > 0; day++)
        {
            if (day % 7 == 0)
            {
                price -= 9000*5;
                count++;
            }
            else if (day % 7 == 1)
            {
                price -= 9000*4;
                count++;
            }
            else if (day % 7 == 2)
            {
                price -= 9000*6;
                count++;
            }
            else if (day % 7 == 5)
            {
                price -= 11000*6;
                count++;
            }
            else if (day % 7 == 6)
            {
                price -= 11000*8;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}