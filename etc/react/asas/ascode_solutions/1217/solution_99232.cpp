#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y; //x 가로 y 세로
        char c[101] = { 0 };
        scanf("%d %d %s", &x, &y, c);
        int lenC = strlen(c);
        for (int j = 0; j < lenC; j++)
        {
            if (x < -40 || x>40)
            {
                break;
            }
            if (c[j] == 'L')
            {
                x--;
            }
            else if (c[j] == 'R')
            {
                x++;
            }
            else if (c[j] == 'U')
            {
                y++;
            }
            else if (c[j] == 'D')
            {
                y--;
            }
            
        }
        if (x < -40 || x>40)
        {
            printf("NO\n");
        }
        else
        {
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}