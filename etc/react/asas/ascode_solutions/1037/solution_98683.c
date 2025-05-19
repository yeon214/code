#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    long long a, real = 0;
    scanf("%lld", &a);
    real = a / (7*60 * 60 * 24);
    printf("%d ", real);
    real = (a % (7*60 * 60 * 24))/ (60 * 60 * 24);
    printf("%d ", real);
    real = ((a % (7 * 60 * 60 * 24)) % (60 * 60 * 24)) / (60 * 60);
    printf("%d ", real);
    real = (((a % (7 * 60 * 60 * 24)) % (60 * 60 * 24)) % (60 * 60))/60;
    printf("%d ", real);
    real = (((a % (7 * 60 * 60 * 24)) % (60 * 60 * 24)) % (60 * 60)) % 60;
    printf("%d", real);
    return 0;
}