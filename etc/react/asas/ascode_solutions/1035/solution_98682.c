#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", (a % 10000) / 100);
    return 0;
}