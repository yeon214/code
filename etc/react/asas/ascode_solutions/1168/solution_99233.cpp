#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char n1[31] = { 0 }, n2[31] = { 0 };
        scanf("%s %s", n1, n2);
        int lenN1 = strlen(n1), lenN2 = strlen(n2), result = 0, sum=0;
        if (lenN1 > lenN2)
        {
            result = lenN1;
        }
        else
        {
            result = lenN2;
        }
        for (int j = 0; j < result; j++)
        {
            if (n1[j])
            {
                n1[j] -= 64;
            }
            if (n2[j])
            {
                n2[j] -= 64;
            }
            sum += abs(n1[j] - n2[j]);
        }
        printf("%d\n", sum);
    }
    return 0;
}