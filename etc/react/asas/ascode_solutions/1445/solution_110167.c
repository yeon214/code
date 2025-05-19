#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 1445
int main(void)
{
    int tc, a, n, b, c, longLen = 0, len;
    scanf("%d", &tc);
    for (a = 0; a < tc; a++)
    {
        scanf("%d", &n);
        char arr[11][21] = { 0 };
        int longLen = 0;
        for (b = 0; b < n; b++)
        {
            scanf("%s", arr[b]);
            len = strlen(arr[b]);
            if (len > longLen)
            {
                longLen = len;
            }
        }
        for (b = 0; b < longLen; b++)
        {
            for (c = 0; c < n; c++)
            {
                if (arr[c][b] != 0)
                {
                    printf("%c", arr[c][b]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}