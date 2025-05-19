#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        unsigned short h, mask=0, result;
        int n;
        scanf("%hx %d", &h, &n);
        if (n == 4)
        {
            for (int j = 0; j <= 3; j++)
            {
                mask += 1 << j;
            }
        }
        else if (n == 3)
        {
            for (int j = 4; j <= 7; j++)
            {
                mask += 1 << j;
            }
        }
        else if (n == 2)
        {
            for (int j = 8; j <= 11; j++)
            {
                mask += 1 << j;
            }
        }
        else if (n == 1)
        {
            for (int j = 12; j <= 15; j++)
            {
                mask += 1 << j;
            }
        }
        result = ~mask;
        printf("%04hx\n", result&h);
    }
    return 0;
}