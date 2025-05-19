#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char arr[1025] = { 0 };
        scanf("%s", arr);
        int len = strlen(arr);
        for (int j = 0; j < len; j++)
        {
            if (arr[j] == 'Z') printf("A");
            else printf("%c", arr[j] + 1);
        }
        printf("\n");
    }
    return 0;
}