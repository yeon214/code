#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y, resultX = 0, resultY= 0;
        char arr[101] = { 0 };
        scanf("%d %d %s", &x, &y, arr);
        int len = strlen(arr);
        for (int j = 0; j < len; j++)
        {
            if (arr[j] == 'L')
            {
                resultX--;
            }
            else if (arr[j] == 'R')
            {
                resultX++;
            }
            else if (arr[j] == 'U')
            {
                resultY++;
            }
            else if (arr[j] == 'D')
            {
                resultY--;
            }
        }
        printf("%d %d\n", resultX, resultY);
    }
    return 0;
}