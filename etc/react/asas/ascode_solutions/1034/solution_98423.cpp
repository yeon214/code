#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int arr[8] = { 0 }, total = 0;
        for (int j = 0; j < 8; j++)
        {
            scanf("%1d", &arr[j]);
        }
        for (int j = 0; j < 8; j++)
        {
            int sum = 1;
            if (j==7)
            {
                if (arr[j] == 1)
                {
                    total++;
                }
            }
            else if (arr[j] == 1)
            {
                sum = 1;
                for (int k = 0; k < 7 - j; k++)
                {
                    sum *= 2;
                }
                total += sum;
            }
            
        }
        printf("%c\n", total);
    }
    return 0;
}
