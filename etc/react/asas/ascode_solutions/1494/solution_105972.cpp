#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm> //미주의 과대생활
using namespace std;
struct student {
	int number, year, month, day;
}list[10];
bool compare(student a, student b)
{
	if (a.year == b.year)
	{
		if (a.month == b.month)
		{
			if (a.day == b.day)
			{
				return a.number < b.number;
			}
			else
			{
				return a.day < b.day;
			}
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
	int count, a, number24, listYear, listMonth, listDay, index = 0;
	scanf("%d", &count);
	for (a = 0; a < count; a++)
	{
		scanf("%d %d %d %d", &number24, &listYear, &listMonth, &listDay);
		/*if (number24 >= 20240000)*/
		
			list[index].number = number24;
			list[index].year = listYear;
			list[index].month = listMonth;
			list[index].day = listDay;
			index++;
		
	}
	sort(list, list + index, compare);
	for (a = 0; a < index; a++)
	{
		printf("%d\n", list[a].number);
	}
	return 0;
}