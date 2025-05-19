#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc, a, w, h, b, c, check; //h가 세로 w가 가로
    scanf("%d", &tc);
    for (a = 0; a < tc; a++)
    {
        char arr[10][10] = { 0 };
        check = 0;
        scanf("%d %d", &w, &h);
        for (b = 0; b < h; b++)
        {
            for (c = 0; c < w; c++)
            {
                scanf(" %c", &arr[b][c]);
            }
        }
        for (b = 0; b < h; b++) //가로
        {
            for (c = 0; c < w/2; c++)
            {
                if (arr[b][c] != arr[b][w - c - 1])
                {
                    check++;
                    break;
                }
            }
        }
        for (c = 0; c < w; c++) //세로
        {
            for (b = 0; b < h/2; b++)
            {
                if (arr[b][c] != arr[h - b - 1][c])
                {
                    check++;
                    break;
                }
            }
        }
        if (check) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}