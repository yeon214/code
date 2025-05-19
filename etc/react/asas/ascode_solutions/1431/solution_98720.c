#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.1lf", a + a * (b / 100.0));
    return 0;
}