#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dic
{
    int price;
    char word[30] = { 0 };
};
int main(void)
{
    struct dic list[10];
    int m, n, a, b, sum = 0, first = 0, check = 0;
    scanf("%d %d", &m, &n); //m이 단어 n이 영어 문장
    for (a = 0; a < m; a++)
    {
        scanf("%s", list[a].word);
        scanf("%d", &list[a].price);
    }
    for (a = 0; a < n; a++)
    {
        sum = 0,first = 0;
        for (;;)
        {
            first++;
            char sentence[30] = { 0 };
            scanf("%s", sentence);
            if (sentence[0] == '.') break;
            if (first == 1)
            {
                if (strcmp(sentence, list[0].word))
                {
                    if (sentence[0] < 65 || sentence[0]>90)
                    {
                        sum -= 5;
                    }
                }
            }
            check = 0;
            for (b = 0; b < m; b++)
            {
                if (strcmp(sentence, list[b].word) == 0)
                {
                    sum -= list[b].price;
                    check++;
                    break;
                }
            }
            if (check == 0)
            {
                sum += strlen(sentence);
            }
        }
        if (sum >= 0)
        {
            printf("%d\n", sum);
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}