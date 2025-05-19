#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    double total = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n);
        total += n;
    }
    printf("%.2lf", total / 7.0);
    return 0;
}