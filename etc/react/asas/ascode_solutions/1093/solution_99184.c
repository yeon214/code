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
        int len, len2, n1, n2, result;
        char num[7] = { 0 }, real[7] = { 0 };
        char num2[7] = { 0 }, real2[7] = { 0 };
        scanf("%s %s", num, num2);
        len = strlen(num);
        len2 = strlen(num2);
        for (int j = 0; j < len; j++)
        {
            real[len - j - 1] = num[j];
        }
        for (int j = 0; j < len2; j++)
        {
            real2[len2 - j - 1] = num2[j];
        }
        n1 = atoi(real);
        n2 = atoi(real2);
        result = n1 + n2;
        for (;;)
        {
            if (result < 100)
            {
                printf("%d\n", result);
                break;
            }
            else
            {
                char a[11] = { 0 };
                sprintf(a, "%d", result);
                int leng = strlen(a);
                result = 1;
                for (int j = 0; j < leng; j++)
                {
                    if (a[j] - '0')
                    {
                        result *= (a[j] - '0');
                    }
                }
            }
        }
    }
    return 0;
}