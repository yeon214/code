#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    for (;;)
    {
        int m, arr[50] = { 0 }, max = 0, min = 0;
        double ave = 0.0;
        scanf("%d", &m);
        if (m == 0)
        {
            break;
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
            ave += arr[i];
        }
        ave /= (double)m;
        for (int i = 0; i < m; i++)
        {
            if (ave >= arr[i])
            {
                min++;
            }
            else
            {
                max++;
            }
        }
        printf("%d %d %d\n", (int)ave, min, max);
    }
    return 0;
}