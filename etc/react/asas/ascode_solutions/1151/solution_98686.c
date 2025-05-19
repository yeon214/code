#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double f;
    scanf("%lf", &f);
    printf("%.2lf", (5.0 / 9.0) * (f - 32));
    return 0;
}