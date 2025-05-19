#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 3
struct dic {
    int dollar;
    char word[20];
};
int main(void)
{
    struct dic list[1000];
    int i, m, n, j, sum =0;
    char c[20] = { 0 };
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        scanf("%s", list[i].word);
        scanf("%d", &list[i].dollar);
    }
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (;;)
        {
            scanf("%s", c);
            if (c[0] == '.') break;
            for (j = 0; j < m; j++)
            {
                if (strcmp(c, list[j].word) == 0)
                {
                    sum += list[j].dollar;
                    break;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}