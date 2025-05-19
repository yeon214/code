#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int s;
    scanf("%d", &s);
    printf("%.8lf", (3.0 * 1.732050807568877 * s * s) / 2.0);
    return 0;
}