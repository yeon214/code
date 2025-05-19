#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c, time;
        scanf("%d %d %d %d", &time , &a, &b, &c);
        int numA=1, numB=1, numC=1;
        for (int j = 0; j < time; j++)
        {
            if (a == numA)
            {
                printf("A");
                numA = 1;
            }
            else
            {
                numA++;
            }
            if (b == numB)
            {
                printf("B");
                numB = 1;
            }
            else
            {
                numB++;
            }
            if (c == numC)
            {
                printf("C");
                numC = 1;
            }
            else
            {
                numC++;
            }
        }
        printf("\n");
    }
    return 0;
}