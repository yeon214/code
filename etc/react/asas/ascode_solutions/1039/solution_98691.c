#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if ((n % 2 == 1) && (n % 7 == 0)) printf("1");
    else printf("0");
    return 0;
}