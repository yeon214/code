#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    long long n;
    scanf("%lld", &n);
    if (n % 3 == 0)
    {
        printf("multiple");
    }
    else if (n % 3 == 1)
    {
        printf("1 remains");
    }
    else if (n % 3 == 2)
    {
        printf("2 remains");
    }
    return 0;
}