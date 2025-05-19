#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int menu, price[10] = { 0 }, buy, drinkNum, sum =0;
        scanf("%d", &menu);
        char arrMenu[10][16] = { 0 }, drink[16] = { 0 };
        for (int j = 0; j < menu; j++)
        {
            scanf("%s %d", arrMenu[j], &price[j]);
        }
        scanf("%d", &buy);
        for (int j = 0; j < buy; j++)
        {
            scanf("%s %d", drink, &drinkNum);
            for (int k = 0; k < menu; k++)
            {
                if (strcmp(drink, arrMenu[k]) == 0)
                {
                    sum += price[k] * drinkNum;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}