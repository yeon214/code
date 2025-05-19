#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double sum= 0.0;
    for (int i = 0; i < 7; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    printf("%d\n", (int)sum);
    sum /= 7.0;
    printf("%d\n", (int)sum);
    return 0;
}