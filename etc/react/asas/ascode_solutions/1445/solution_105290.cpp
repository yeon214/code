#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, n, a, b;
    scanf("%d", &tc);
    while (tc--)
    {
        char arr[10][21] = { 0 };
        scanf("%d", &n);
        for (a = 0; a < n; a++)
        {
            scanf("%s", arr[a]);
        }
        for (a = 0; a < 20; a++)
        {
            for (b = 0; b < n; b++)
            {
                if (arr[b][a] != 0)
                {
                    printf("%c", arr[b][a]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}