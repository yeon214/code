#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dic {
	char name[16];
	int age;
	char position[21];
}list[15];
int main(void)
{
	int tc, a, total = 0, max = 0, min = 50, maxIndex=0, minIndex=0;
	scanf("%d", &tc);
	for(a = 0; a < tc; a++)
	{
		scanf(" %s %d %s", list[a].name, &list[a].age, list[a].position);
		total += list[a].age;
		if (list[a].age > max)
		{
			max = list[a].age;
			maxIndex = a;
		}
		if (list[a].age < min )
		{
			min = list[a].age;
			minIndex = a;
		}
	}
	printf("average age : %d\n", (int)(total / (double)tc));
	printf("the oldest : %s %s\n", list[maxIndex].name, list[maxIndex].position);
	printf("the youngest : %s %s", list[minIndex].name, list[minIndex].position);
	return 0;
}