#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int tc, x1, x2, x3, x4, y1, y2, y3, y4, temp;
	scanf("%d", &tc);
	while (tc--)
	{
		int resultX = 0, resultY = 0;
        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		resultX = min(max(x1, x2), max(x3, x4)) - max(min(x1, x2), min(x3, x4));
		resultY = min(max(y1, y2), max(y3, y4)) - max(min(y1, y2), min(y3, y4));
		if (resultX > 0 && resultY > 0)
		{
			printf("%d\n", resultX * resultY);
		}
		else printf("0\n");
	}
	return 0;
}