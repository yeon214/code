#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int w;
    scanf("%d", &w);
    if (w % 2 == 0)
    {
        if ((w - 2) % 2 == 0 && w != 2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}