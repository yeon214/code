#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if ((n % 2 == 1) && (n % 3 == 0)) printf("YES");
    else if ((n % 7 == 0) && (n % 17 == 0)) printf("YES");
    else printf("NO");
    return 0;
}