#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, sum = 0;
    printf("======================\n");
    printf("입금\t출금\t잔고\t\n");
    printf("======================\n");
    for (;;) //num=0일 때는 어떻게 넣어야 맞을지 감이 안오네
    {
        if (scanf("%d", &num) != 1) break;
        sum += num;
        if (num >= 0)
        {
            printf("%d\t\t%d\t\n", num, sum);
        }
        else
        {
            printf("\t%d\t%d\t\n", abs(num), sum);
        }
    }
    printf("======================\n");
    return 0;
}