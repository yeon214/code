#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, gcd = 1, result = 1; //a가 분자 b가 분모
        scanf("%d %d", &a, &b);
        for (int j = 1; j <= a && j <= b; j++)
        {
            if (a % j == 0 && b % j == 0)
            {
                gcd = j;
            }
        }
        b /= gcd;
        while (b % 2 == 0) {
            b /= 2;
        }
        while (b % 5 == 0) {
            b /= 5;
        }
        if (b == 1)
        {
            printf("Limited\n");
        }
        else
        {
            printf("Unlimited\n");
        }
    }
    return 0;
}