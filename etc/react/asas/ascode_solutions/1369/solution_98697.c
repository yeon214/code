#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (b * b - 4 * a * c > 0)
    {
        printf("Real");
    }
    else if (b * b - 4 * a * c == 0)
    {
        printf("%.2lf", (-1.0 * b) / (2.0 * a));
    }
    else
    {
        printf("Imaginary");
    }
    return 0;
}