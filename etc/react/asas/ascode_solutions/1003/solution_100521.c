#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) 
    {
        int w, h, r, arr[33][33] = { 0 }, check[26] = { 0 }, count = 0, numJ =0, numK=0;
        scanf("%d %d %d", &w, &h, &r);
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < w; k++)
            {
                scanf(" %c", &arr[j][k]);
                
                if (arr[j][k] >= 'A' && arr[j][k] <= 'Z')
                {
                    check[arr[j][k]-'A']++;
                }
                if (arr[j][k] == '@')
                {
                    numJ = j;
                    numK = k;
                }
            }
        }
        for (int j = numJ - r; j <= numJ + r; j++)
        {
            for (int k = numK - r; k <= numK + r; k++)
            {
                if ((j >= 0 && j < h) && (k >= 0 && k < w))
                {
                    if (arr[j][k] != '#')
                    {
                        count++;
                    }
                }
            }
        }
        for (int j = 0; j < 26; j++)
        {
            if (check[j])
            {
                printf("%c %d\n", j + 65, check[j]);
            }
        }
        if(count != 1)
            printf("Monsters Nearby %d\n", count - 1);
        printf("\n");
    }
    return 0;
}