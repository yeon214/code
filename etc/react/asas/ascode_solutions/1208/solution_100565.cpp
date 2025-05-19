#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        double result[2] = { 0 }, d;
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0)
        {
            printf("No quadratic\n");
        }
        else
        {
            d = sqrt(b * b - 4 * a * c);
            if (b * b - 4 * a * c == 0)
            {
                printf("%.3lf\n", (-b + d) / (double)(2 * a));
            }
            else if (b * b - 4 * a * c < 0)
            {
                printf("Imaginary\n");
            }
            else
            {
                d = sqrt(b * b - 4 * a * c);
                result[0] = (-b + d) / (double)(2 * a);
                result[1] = (-b - d) / (double)(2 * a);
                sort(result, result + 2, greater<int>());
                printf("%.3lf %.3lf\n", result[0], result[1]);
            }
        }
    }
    return 0;
}