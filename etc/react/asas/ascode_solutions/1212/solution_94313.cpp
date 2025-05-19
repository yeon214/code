#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int h, w;
        scanf("%d %d", &w, &h);
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                if ((j == 0) || (j == h - 1))
                {
                    if ((k == 0) || (k == w - 1))
                    {
                        printf("@");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    if ((k == 0) || (k == w - 1))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}