#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count[26] = { 0 };
        char string[2001] = { 0 };
        scanf("%s", string);
        int len = strlen(string);
        for (int j = 0; j < len; j++)
        {
            int num = string[j];
            count[num - 97]++;
        }
        for (int j = 0; j < 26; j++)
        {
            if (count[j])
            {
                printf("%c:%d\n", j + 97, count[j]);
            }
        }
        printf("\n");
    }
    return 0;
}