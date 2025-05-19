#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char arr[301] = { 0 }, arr2[301] = { 0 };
        scanf("%s %s", arr, arr2);
        int len = strlen(arr), check = 0, flag = 0;
        for (int j = 0; j < len; j++)
        {
            flag = 0;
            for (int k = 0; k < len; k++)
            {
                if (arr[j] == arr2[k] || arr[j] == (arr2[k]^32))
                {
                    ++check, ++flag;
                    arr2[k] = 0;
                }
                if (flag) break;
            }
        }
        if (len == check)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }
    return 0;
}