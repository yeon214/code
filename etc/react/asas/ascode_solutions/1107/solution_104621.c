#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int row, col, num=0;
        scanf("%d %d", &row, &col);
        for (int j = 0; j < row; j++)
        {
            num = j;
            for (int k = 0; k < col; k++)
            {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}