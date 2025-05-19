#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int m, s;
    scanf("%d %d", &m, &s);
    if (m < s)
    {
        printf("Can not buy.");
    }
    else
    {
        printf("%d %d", m / s, m % s);
    }
    return 0;
}