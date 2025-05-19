#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int x, z;
    scanf("%d %d", &x, &z);
    if (x == 0 || z == 0)
    {
        printf("Impossible!");
    }
    else
    {
        printf("%d\n", x % z);
        printf("%.5lf", (x / (double)z) * ((x * x + z * z) / (double)(2 * x)) - (x * (z + z * z) - 5) / (double)(x - 3 * z));
    }
    return 0;
}