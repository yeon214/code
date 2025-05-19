#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.4lf", (-b) / (double)(2 * a));
    return 0;
}