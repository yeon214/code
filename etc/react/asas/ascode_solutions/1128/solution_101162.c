#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y, check = 0;
        char arr[100] = { 0 };
        scanf("%d %d %s", &x, &y, arr);
        int len = strlen(arr);
        for (int j = 0; j < len; j++)
        {
            if (arr[j] == 'L') x--;
            else if (arr[j] == 'R') x++;
            else if (arr[j] == 'U') y++;
            else if (arr[j] == 'D') y--;
            if ((x >= -30 && x <= 30) && (y >= -60 && y <= 60))
            {

            }
            else
            {
                check++;
                printf("invalid\n");
                break;
            }
        }
        if (check == 0)
        {
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}

