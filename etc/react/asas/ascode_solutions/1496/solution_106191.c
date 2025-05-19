#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void) 
{
    int tc;
    char role[15];
    double d;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%s %lf", role, &d);
        if (strcmp(role, "roundUp") == 0)
        {
            printf("%.2lf\n", ceil(d));
        }
        else if (strcmp(role, "roundDown") == 0)
        {
            printf("%.2lf\n", floor(d));
        }
        else if (strcmp(role, "roundOff") == 0)
        {
            printf("%.2lf\n", d);
        }
        else if (strcmp(role, "absoluteNumber") == 0)
        {
            printf("%.3lf\n", fabs(d));
        }
    }
    return 0;
}