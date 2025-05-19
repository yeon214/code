#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc;
    scanf("%d", &tc);
    for (; tc--;)
    {
        int n, a, b ,check = 0;
        char num[201] = { 0 }, result[201] = { 0 };
        scanf("%d", &n);
        for (a = 0; a < n; a++)
        {
            scanf("%s", num);
            if (a == 0) strcpy(result, num);
            else
            {
                for (b = 0; b < 201; b++)
                {
                    if (num[b] != result[b])
                    {
                        result[b] = 0;
                    }
                }
            }
        }
        for (a = 0; a < 201; a++)
        {
            if (result[a] >= 'a' && result[a] <= 'z')
            {
                check++;
                break;
            }
        }
        if (check == 0)
        {
            printf("No common prefix!\n");
        }
        else
        {
            printf("%s\n", result);
        }
    }
    return 0;
}