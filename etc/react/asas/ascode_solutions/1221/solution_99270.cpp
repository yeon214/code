#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
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
            if (n1[j] == 0)
            {
                n1[j] = 65;
            }
        }
        for (int j = 0; j < result; j++)
        {
            if (n2[j] == 0)
            {
                n2[j] = 65;
            }
        }
        for (int j = 0; j < result; j++)
        {
            if (n1[j] - 64 > n2[j] - 64)
            {
                sum += n2[j] - 64;
            }
            else
            {
                sum += n1[j] - 64;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}