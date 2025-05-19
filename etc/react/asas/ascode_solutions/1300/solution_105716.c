#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dic{
	char memberName[16];
	int age;
	char position[21];
	int number;
}list[15];
int main(void)
{
	int member, a, sum = 0, older = 0, youngest = 51, olderIndex = 0, youngestIndex = 0;
	scanf("%d", &member);
	for (a = 0; a < member; a++)
	{
		scanf(" %s %d %s %d", list[a].memberName, &list[a].age, list[a].position, &list[a].number);
		sum += list[a].age;
		if (older <= list[a].age)
		{
			older = list[a].age;
			olderIndex = a;
		}
		if (youngest >= list[a].age)
		{
			youngest = list[a].age;
			youngestIndex = a;
		}
	}
	printf("average age : %d\n", (int)(sum / (double)member));
	printf("the oldest : %s %s %d\n", list[olderIndex].memberName, list[olderIndex].position, list[olderIndex].number);
	printf("the youngest : %s %s %d\n", list[youngestIndex].memberName, list[youngestIndex].position, list[youngestIndex].number);
	return 0;
}