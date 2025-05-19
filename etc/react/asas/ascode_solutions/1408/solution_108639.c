#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, a, x, change, index, b, flag, check;
    scanf("%d", &tc);
    while (tc--)
    {
        check = 0;
        scanf("%d", &x);
        for (a = 36; a >= 2; a--)
        {
            change = x, index = 0, flag = 0;
            int arr[100] = { 0 };
            for (; change > 0;)
            {
                arr[index++] = change % a;
                change /= a;
            }
            for (b = 0; b < index / 2; b++)
            {
                if (arr[b] != arr[index - 1 - b])
                {
                    flag++;
                    break;
                }
            }
            if (flag == 0)
            {
                check++;
                break;
            }
        }
        if (check) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}