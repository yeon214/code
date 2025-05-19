#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int arr[19][19] = { 0 };
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int black = 0, white = 0;
        for (int j = 0; j < 19; j++)
        {
            for (int k = 0; k < 19; k++)
            {
                scanf("%d", &arr[j][k]);
            }
        }
        for (int j = 0; j < 19; j++)
        {
            for (int k = 0; k < 19; k++)
            {
                int a = 0, b = 0, c = 0, d = 0;
                int x = 0, y = 0, z = 0, q = 0;
                if (arr[j][k] == 1)
                {
                    for (int n = 0; n < 5; n++)
                    {
                        if (arr[j + n][k] == 1)
                        {
                            a++;
                        }
                        if (arr[j][k + n] == 1)
                        {
                            b++;
                        }
                        if (arr[j + n][k + n] == 1)
                        {
                            c++;
                        }
                        if (arr[j - n][k + n] == 1)
                        {
                            d++;
                        }
                    }
                }
                if (arr[j][k] == 2)
                {
                    for (int n = 0; n < 5; n++)
                    {
                        if (arr[j + n][k] == 2)
                        {
                            x++;
                        }
                        if (arr[j][k + n] == 2)
                        {
                            y++;
                        }
                        if (arr[j + n][k + n] == 2)
                        {
                            z++;
                        }
                        if (arr[j - n][k + n] == 2)
                        {
                            q++;
                        }
                    }
                }
                if (a == 5 || b == 5 || c == 5 || d == 5)
                {
                    black++;
                }
                if (x == 5 || y == 5 || z == 5 || q == 5)
                {
                    white++;
                }
            }
        }
        if (black > 0)
        {
            printf("Black wins!\n");
        }
        else if (white > 0)
        {
            printf("White wins!\n");
        }
        else
        {
            printf("Yet\n");
        }
    }
    return 0;
}