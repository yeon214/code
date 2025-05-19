#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long long amount, real = 0;
    scanf("%lld", &amount);
    real = amount / 50000;
    printf("%d ", real);
    real = (amount % 50000)/10000;
    printf("%d ", real);
    real = ((amount % 50000) % 10000) / 5000;
    printf("%d ", real);
    real = (((amount % 50000) % 10000) % 5000) / 1000;
    printf("%d", real);
    return 0;
}