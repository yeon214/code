#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, l;
        char c[21];
        scanf("%d %s", &n, c);
        l = strlen(c);
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%c", c[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
