#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct dic {
	char name[11]; //c++로 제출하기
	int scort1, scort2, scort3, scort4, scort5;
}list[50];
int main(void)
{
	int tc, n, a, b, max = 0, abandon, sum = 0;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d", &n);
		for (a = 0; a < n; a++)
		{
			scanf(" %s", list[a].name);
			scanf("%d %d %d %d %d %d", &abandon, &list[a].scort1, &list[a].scort2, &list[a].scort3, &list[a].scort4, &list[a].scort5);
		}
		for (a = 0; a < n; a++)
		{
			max = 0, sum = 0;
			if (max < list[a].scort1) max = list[a].scort1;
			if (max < list[a].scort2) max = list[a].scort2;
			if (max < list[a].scort3) max = list[a].scort3;
			if (max < list[a].scort4) max = list[a].scort4;
			if (max < list[a].scort5) max = list[a].scort5;
			sum += list[a].scort1+ list[a].scort2+ list[a].scort3+ list[a].scort4+ list[a].scort5;
			printf("%s %d %.2lf\n", list[a].name, max, sum / 5.0);
		}
		printf("\n");
	}
}