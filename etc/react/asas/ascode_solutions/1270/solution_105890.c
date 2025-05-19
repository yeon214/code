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
 /*           printf("money %d\n", money);*/
            for (a = 0; a < subwayCount; a++)
            {
                if (a == 0)
                {
                    minResult = list[a].subwayList, minIndex = a;
 /*                   printf("1 minResult %d list[a].subwayList %d minIndex %d a %d\n", minResult, list[a].subwayList, minIndex, a);*/
                }
                else
                {
                    if (minResult > list[a].subwayList)
                    {
                        minResult = list[a].subwayList, minIndex = a;
  /*                      printf("2 minResult %d list[minIndex].subwayList %d minIndex %d a %d\n", minResult, list[a].subwayList, minIndex, a);*/
                    }
                }
 /*               printf("반복문\n");*/
            }
            list[minIndex].subwayList += list[minIndex].speed;
  /*          printf("3 list[minIndex].subwayList %d list[minIndex].speed %d\n", list[minIndex].subwayList, list[minIndex].speed);*/
            /*if (money == 0)
            {
                result = list[minIndex].subwayList;
                printf("4 result %d list[minIndex].subwayList %d\n", result, list[minIndex].subwayList);
            }*/
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