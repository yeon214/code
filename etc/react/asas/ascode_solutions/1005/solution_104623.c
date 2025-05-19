#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int time, c, cycle[10] = { 0 }; //c가 주기 3, cycle이 주기 값 1 3 2
        int result[10] = { 0 };
        scanf("%d %d", &time, &c);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &cycle[j]);
            result[j] = 1;
        }
        for (int j = 0; j < time; j++)
        {
            for (int k = 0; k < c; k++)
            {
                if (cycle[k] == result[k])
                {
                    printf("%c", k + 65);
                    result[k] = 1;
                    /*printf("cycle[k] %d result[k] %d \n", cycle[k], result[k]);*/
                }
                else
                {
                    result[k]++;
                    /*printf("result[k] %d \n", result[k]);*/
                }
            }
        }
        printf("\n");
    }
    return 0;
}