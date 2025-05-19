#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char num[1000001] = { 0 };
int result[1000001] = { 0 };
int main(void)
{
    scanf("%s", num);
    int n, i, j, len = strlen(num), number=0, a;
    scanf("%d", &n);
    for (i = 0; i < len-1; i++)
    {
        if (num[i] == num[i + 1])
        {
            result[i + 1] = number;
        }
        else
        {
            result[i + 1] = ++number;
        }
    }
    for (a = 0; a < n; a++)
    {
        scanf("%d %d", &i, &j);
        if (result[i] == result[j])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}