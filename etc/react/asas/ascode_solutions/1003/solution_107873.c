#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc, w, h, r, a, b, indexH, indexW;
	char arr[32][32];
	scanf("%d", &tc);
	while (tc--)
	{
		int english[26] = { 0 }, count = 0;
		scanf("%d %d %d", &w, &h, &r); //w가 가로 h가 세로
		for (a = 0; a < h; a++)
		{
			for (b = 0; b < w; b++)
			{
				scanf(" %c", &arr[a][b]);
				if (arr[a][b] == '@') indexH = a, indexW = b;
				if (arr[a][b] != '@' && arr[a][b] != '#')
				{
					english[arr[a][b] - 'A']++;
				}
			}
		}
		for (a = indexH - r; a <= indexH+r; a++)
		{
			for (b = indexW - r; b <= indexW + r; b++)
			{
				if (arr[a][b]>='A' && arr[a][b]<= 'Z') count++;
			}
		}
		for (a = 0; a < 26; a++)
		{
			if (english[a]) printf("%c %d\n", a + 'A', english[a]);
		}
		if (count) printf("Monsters Nearby %d\n", count);
		printf("\n");
	}
	return 0;
}