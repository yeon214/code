#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int arr[5][5] = { 0 }, n, a, line = 0, num0 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &n);
    for (int h = 0; h < n; h++)
    {
        scanf("%d", &a);
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (a == arr[i][j])
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
    //가로 체크
    for (int i = 0; i < 5; i++)
    {
        num0 = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]==0)
            {
                num0++;
            }
        }
        if (num0 == 5)
        {
            line++;
        }
    }
    //세로 체크
    for (int i = 0; i < 5; i++)
    {
        num0 = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[j][i] == 0)
            {
                num0++;
            }
        }
        if (num0 == 5)
        {
            line++;
        }
    }
    //왼쪽 위에서 오른쪽 아래로 대각선 체크
    num0 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i][i] == 0)
        {
            num0++;
        }
    }
    if (num0 == 5)
    {
        line++;
    }
    //왼쪽 아래에서 오른쪽 위로 대각선 체크
    num0 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i][4-i] == 0)
        {
            num0++;
        }
    }
    if (num0 == 5)
    {
        line++;
    }
    printf("%d", line);
    return 0;
}