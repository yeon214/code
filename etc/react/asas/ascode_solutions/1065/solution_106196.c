#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int tc, a, b, c;
    scanf("%d", &tc);
    while (tc--)
    {
        char num[6];
        scanf("%s", num);
        int len = strlen(num);
        for (a = 0; a < 5; a++)
        {
            for (b = 0; b < len; b++)
            {
                if (a == 0)
                {
                    if (num[b] == '1') printf("  *");
                    else if (num[b] == '4') printf("* *");
                    else printf("***");
                }
                else if(a == 1)
                {
                    if (num[b] == '1' || num[b] == '2' || num[b] == '3' || num[b] == '7') printf("  *");
                    else if (num[b] == '4' || num[b] == '8' || num[b] == '9' || num[b] == '0') printf("* *");
                    else printf("*  ");
                }
                else if (a == 2)
                {
                    if (num[b] == '1' || num[b] == '7') printf("  *");
                    else if (num[b] == '0') printf("* *");
                    else printf("***");
                }
                else if (a == 3)
                {
                    if (num[b] == '6' || num[b] == '8' || num[b] == '0') printf("* *");
                    else if (num[b] == '2') printf("*  ");
                    else printf("  *");
                }
                else if (a == 4)
                {
                    if (num[b] == '1' || num[b] == '4' || num[b] == '7') printf("  *");
                    else printf("***");
                }
                if (b!=len-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}