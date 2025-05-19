#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, a;
    scanf("%d", &tc);
    while (tc--)
    {
        char arr[1025];
        scanf("%s", arr);
        int len = strlen(arr), check = 0, flag = 0;
        for (a = 0; a <= len - 4; a++)
        {
            if ((arr[a] == 'c' || arr[a]=='C') && (arr[a + 1] == 'h' || arr[a+1]=='H') && (arr[a + 2] == 'a' || arr[a+2] == 'A') && (arr[a + 3] == 'r' || arr[a+3]=='R'))
            {
                check++;
            }
        }
        if (check > 1)
        {
            for (a = 0; a <= len - 4; a++)
            {
                if ((arr[a] == 'c' || arr[a] == 'C') && (arr[a + 1] == 'h' || arr[a + 1] == 'H') && (arr[a + 2] == 'a' || arr[a + 2] == 'A') && (arr[a + 3] == 'r' || arr[a + 3] == 'R'))
                {
                    arr[a] = 0, arr[a + 1] = 0, arr[a + 2] = 0, arr[a + 3] = 0;
                }
            }
        }
        for (a = 0; a < len; a++)
        {
            if (arr[a] != 0)
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            printf("I Hate CharChar!\n");
        }
        else
        {
            for (a = 0; a < len; a++)
            {
                if (arr[a])
                {
                    printf("%c", arr[a]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}