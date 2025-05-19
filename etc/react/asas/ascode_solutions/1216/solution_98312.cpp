#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
    char arr1[21] = "", arr2[21] = "";
    int a = 0, b = 0;
    scanf("%s %s", arr1, arr2);
    if (strlen(arr1) > strlen(arr2))
    {
        printf("%s", arr1);
    }
    else if (strlen(arr1) < strlen(arr2))
    {
        printf("%s", arr2);
    }
    else
    {
        if (strcmp(arr1, arr2) < 0)
        {
            printf("%s", arr1);
        }
        else
        {
            printf("%s", arr2);
        }
    }
    return 0;
}