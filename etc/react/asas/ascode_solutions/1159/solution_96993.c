#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        int arr[30] = { 0 };
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int temp = 0;
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = 0; k < n - 1 - j; k++)
            {
                if (arr[k] < arr[k + 1])
                {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
        printf("%d %d\n", arr[0], arr[4]);
    }
    return 0;
}