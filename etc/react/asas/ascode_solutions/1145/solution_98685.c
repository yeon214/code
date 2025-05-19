#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int c;
    scanf("%d", &c);
    printf("%d", (int)((9.0 / 5.0) *c + 32));
    return 0;
}