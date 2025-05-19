#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) //1326
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char n1[9] = { 0 }, n2[9] = { 0 }, null[9] = { 0 }, c = 0;
        scanf("%s %s", n1, n2);
        int lenN1 = strlen(n1), lenN2 = strlen(n2), total = 0;
        for (int j = 0; j < lenN1 / 2; j++)
        {
            c = n1[j];
            n1[j] = n1[lenN1 - j - 1];
            n1[lenN1 - j - 1] = c;
        }
        for (int j = 0; j < lenN2 / 2; j++)
        {
            c = n2[j];
            n2[j] = n2[lenN2 - j - 1];
            n2[lenN2 - j - 1] = c;
        }
        for (int j = 0; j < lenN1; j++)
        {
            total += n1[j] - '0';
        }
        for (int j = 0; j < lenN2; j++)
        {
            total += n2[j] - '0';
        }
        for (;;)
        {
            if (total < 10)
            {
                printf("%d\n", total);
                break;
            }
            else
            {
                sprintf(null, "%d", total);
                total = 0;
                int lenNull = strlen(null);
                for (int j = 0; j < lenNull; j++)
                {
                    total += null[j] - '0';
                }
            }
        }
    }
    return 0;
}