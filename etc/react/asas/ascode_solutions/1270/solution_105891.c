#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct subway {
    int subwayList, speed;
}list[100];
int main(void)
{
    int tc, subwayCount, money, a, minResult, minIndex = 0, result = 0;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d %d", &subwayCount, &money);
        for (a = 0; a < subwayCount; a++)
        {
            scanf("%d", &list[a].subwayList);
        }
        for (a = 0; a < subwayCount; a++)
        {
            scanf("%d", &list[a].speed);
        }
        while (money--)
        {
            for (a = 0; a < subwayCount; a++)
            {
                if (a == 0)
                {
                    minResult = list[a].subwayList, minIndex = a;
                }
                else
                {
                    if (minResult > list[a].subwayList)
                    {
                        minResult = list[a].subwayList, minIndex = a;
                    }
                }
            }
            list[minIndex].subwayList += list[minIndex].speed;
        }
        for (a = 0; a < subwayCount; a++)
        {
            if (a == 0) minResult = list[a].subwayList, minIndex = a;
            else
            {
                if (minResult > list[a].subwayList)
                {
                    minResult = list[a].subwayList, minIndex = a;
                }
            }
        }
        printf("%d\n", list[minIndex].subwayList);
    }
}