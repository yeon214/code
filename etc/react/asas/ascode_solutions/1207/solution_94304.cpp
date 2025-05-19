#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
    int t;
    double c = sqrt(3);
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);
        printf("%.5lf\n", (c / 4) * a * a);
    }
    return 0;
}