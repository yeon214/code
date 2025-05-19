#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int tc, a, b, arr[3][3];
	scanf("%d", &tc);
	while (tc--)
	{
		int count1 = 0, count2 = 0, line1 = 0, line2 = 0, countTotal = 0;
		int check1 = 0, check2 = 0;
		for (a = 0; a < 3; a++)
		{
			for (b = 0; b < 3; b++)
			{
				scanf("%d", &arr[a][b]);
				if (arr[a][b] == 1) count1++, countTotal++;
				else if (arr[a][b] == 2) count2++, countTotal++;
			}
		}
		for (a = 0; a < 3; a++) //가로 판단
		{
			check1 = 0, check2 = 0;
			for (b = 0; b < 3; b++)
			{
				if (arr[a][b] == 1) check1++;
				else if (arr[a][b] == 2) check2++;
			}
			if (check1 == 3) line1++;
			else if (check2 == 3) line2++;
		}
		for (a = 0; a < 3; a++) //세로 판단
		{
			check1 = 0, check2 = 0;
			for (b = 0; b < 3; b++)
			{
				if (arr[b][a] == 1) check1++;
				else if (arr[b][a] == 2) check2++;
			}
			if (check1 == 3) line1++;
			else if (check2 == 3) line2++;
		}
		check1 = 0, check2 = 0;
		for (a = 0; a < 3; a++)
		{
			if (arr[a][a] == 1) check1++;
			else if (arr[a][a] == 2) check2++;
		}
		if (check1 == 3) line1++;
		else if (check2 == 3) line2++;
		check1 = 0, check2 = 0;
		for (a = 0; a < 3; a++)
		{
			if (arr[2-a][a] == 1) check1++;
			else if (arr[2-a][a] == 2) check2++;
		}
		if (check1 == 3) line1++;
		else if (check2 == 3) line2++;

		if (count1 - count2 > 1) printf("NO\n");
		else if (count2 - count1 > 0) printf("NO\n");
		else if (line1 > 2) printf("NO\n");
		else if (line2 > 2) printf("NO\n");
		else if (line1==1&&line2==1) printf("NO\n");
		else if (line1 >= 1)
		{
			if (count1 - count2 == 1) printf("1\n");
			else printf("NO\n");
		}
		else if (line2 >= 1)
		{
			if (count1 - count2 == 0) printf("2\n");
			else printf("NO\n");
		}
		else if (countTotal == 9) printf("DRAW\n");
		else printf("YES\n");
	}
	return 0;
}