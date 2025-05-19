#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char c[2000] = "";
        int len = 0;
        scanf("%s", c);
        len = strlen(c);
        for (int j = 0; j < len; j++)
        {
            if (c[j] >= 'a' && c[j] <= 'z')
            {
                c[j] -= 32;
            }
            else if (c[j] >= 'A' && c[j] <= 'Z')
            {
                c[j] += 32;
            }
        }
        printf("%s\n", c);
    }
    return 0;
}