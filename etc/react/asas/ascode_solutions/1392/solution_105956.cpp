#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct schedule {
    char scheduleName[11];
    int year, month, day;
}list[3000];
bool compare(schedule a, schedule b)
{
    if (a.year == b.year)
    {
        if (a.month == b.month)
        {
            if (a.day == b.day)
            {
                return strcmp(a.scheduleName, b.scheduleName) < 0;
            }
            return a.day < b.day;
        }
        else
        {
            return a.month < b.month;
        }
    }
    else
    {
        return a.year < b.year;
    }
}
int main(void)
{
    int index = 0, a;
    for (; scanf("%s %d %d %d", list[index].scheduleName, &list[index].year, &list[index].month, &list[index].day) != EOF; index++)
    {
    }
    sort(list, list + index, compare);
    for (a = 0; a < index; a++)
    {
        printf("%s\n", list[a].scheduleName);
    }
}