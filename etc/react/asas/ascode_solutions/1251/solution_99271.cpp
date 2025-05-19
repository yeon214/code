#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char arr[21] = { 0 }, real[21] = { 0 };
        int sum = 0, multi = 1;
        scanf("%s", arr);
        int lenArr = strlen(arr), temp = 0;
        for (int j = 0; j < lenArr; j++)
        {
            temp = arr[j];
            arr[j] = real[lenArr - 1 - j];
            real[lenArr - 1 - j] = temp;
        }
        for (int j = 0; j < lenArr; j++)
        {
            multi = 1;
            if (real[j] == 49)
            {
                for (int k = 0; k < j; k++)
                {
                    multi *= 2;
                }
                sum += multi;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}