#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct dic {
	char name[11];
	int score[5];
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
			scanf("%d", &abandon);
			for (b = 0; b < 5; b++)
			{
				scanf("%d", &list[a].score[b]);
			}
		}
		for (a = 0; a < n; a++)
		{
			max = 0, sum = 0;
			for (b = 0; b < 5; b++)
			{
				if (list[a].score[b] > max)
				{
					max = list[a].score[b];
				}
				sum += list[a].score[b];
			}
			printf("%s %d %.2lf\n", list[a].name, max, sum / 5.0);
		}
		printf("\n");
	}
}