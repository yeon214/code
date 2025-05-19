#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dic {
    char menu[21];
    int price;
}list[10];
int main(void)
{
    int tc, m ,p, a, result = 0, b, bill, coin500, coin100, coin50, coin10, remain ,billCount;
    char sentence[21];
    scanf("%d", &tc);
    while (tc--)
    {
        bill = 0, coin500 = 0, coin100 = 0, coin50 = 0, coin10 = 0, billCount = 0;
        result = 0, remain = 0;
        scanf("%d %d", &m, &p);
        for (a = 0; a < m; a++)
        {
            scanf("%s %d", list[a].menu, &list[a].price);
        }
        for (a = 0; a < p; a++)
        {
            scanf("%s", sentence);
            for (b = 0; b < m; b++)
            {
                if (strcmp(sentence, list[b].menu) == 0)
                {
                    result += list[b].price;
                    break;
                }
            }
        }
        printf("%d ", result);
        for (; result > bill;)
        {
            bill += 1000;
        }
        printf("%d ", bill);
        remain = bill - result;
        for (; bill >= 50000;)
        {
            bill -= 50000;
            billCount++;
        }
        for (; bill >= 10000;)
        {
            bill -= 10000;
            billCount++;
        }
        for (; bill >= 5000;)
        {
            bill -= 5000;
            billCount++;
        }
        for (; bill >= 1000;)
        {
            bill -= 1000;
            billCount++;
        }
        printf("%d %d", billCount, remain);
        for (; remain >= 500;)
        {
            (remain) -= 500;
            coin500++;
        }
        for (; remain >= 100;)
        {
            (remain) -= 100;
            coin100++;
        }
        for (; remain >= 50;)
        {
            (remain) -= 50;
            coin50++;
        }
        for (; remain >= 10;)
        {
            (remain) -= 10;
            coin10++;
        }
        printf("(500:%d 100:%d 50:%d 10:%d)\n", coin500, coin100, coin50, coin10);
    }
}