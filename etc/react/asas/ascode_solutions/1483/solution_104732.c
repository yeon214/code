#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    char arr[31] = { 0 }, result[3] = { 0 };
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", arr);
        result[i] = arr[0];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c", result[i]);
    }
    return 0;
}