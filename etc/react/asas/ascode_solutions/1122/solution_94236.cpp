#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int n, arr[45] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n * 6; i++)
    {
        int a;
        scanf("%d", &a);
        arr[a - 1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        int index = -1, max = 0;
        for (int j = 44; j >= 0; j--)
        {
            if (max <= arr[j])
            {
                max = arr[j];
                index = j;
            }
        }
        printf("%d ", index+1);
        arr[index] = 0;
    }
    return 0;
} 