#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int arr[81] = { 0 }, index = 0 , max = 0;
    int* p = arr;
    for (int i = 0; i < 81; i++)
    {
        scanf("%d", p+i);
        if (i == 0) max = *p, index = i;
        else
        {
            if (max <= *(p+i))
            {
                max = *(p + i), index = i;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", index / 9 + 1, index % 9 + 1);


    return 0;
}