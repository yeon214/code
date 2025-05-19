#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        double d = sqrt(b * b - 4 * a * c);
        if (b * b - 4 * a * c < 0)
        {
            printf("Imaginary");
        }
        else if (b * b - 4 * a * c == 0)
        {
            printf("%.3lf", -b / (double)(2 * a));
        }
        else
        {
            if (a == 0)
            {
                printf("No quadratic");
            }
            else if (a > 0)
            {
                printf("%.3lf %.3lf", (-b + d) / (double)(2 * a), (-b - d) / (double)(2 * a));
            }
            else if (a < 0)
            {
                printf("%.3lf %.3lf", (-b - d) / (double)(2 * a), (-b + d) / (double)(2 * a));
            }
        }
        printf("\n");
    }
    return 0;
}