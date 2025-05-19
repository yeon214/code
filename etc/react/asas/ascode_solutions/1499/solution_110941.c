#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, arr[100][3], a,b, flag = 0, index;
	scanf("%d", &n);
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < 3; b++)
		{
			scanf("%d", &arr[a][b]);
			if (arr[a][b] == 2) index = b;
		}
	}
	//0은 -1, |은 -2, /은 -3, \은 -4, X는 -5
	for (a = n - 1; a >= 0; a--)
	{
		if (a == 0)
		{
			if (index == 0)
			{
				if (arr[0][0] == 0)
				{
					arr[a][0] = -5, arr[a][1] = -1, arr[a][2] = -1;
				}
				else if (arr[0][1] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -5, arr[a][2] = -1;
				}
			}
			else if (index == 1)
			{
				if (arr[0][1] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -5, arr[a][2] = -1;
				}
				else if (arr[0][2] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -1, arr[a][2] = -5;
				}
				else if (arr[0][0] == 0)
				{
					arr[a][0] = -5, arr[a][1] = -1, arr[a][2] = -1;
				}
			}
			else
			{
				if (arr[0][2] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -1, arr[a][2] = -5;
				}
				else if (arr[0][1] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -5, arr[a][2] = -1;
				}
			}
		}
		else
		{
			if (index == 0)
			{
				if (arr[a - 1][0] && arr[a - 1][1])
				{
					flag++;
					break;
				}
				else if (arr[a - 1][0] == 0)
				{
					arr[a][0] = -2, arr[a][1] = -1, arr[a][2] = -1;
				}
				else if (arr[a - 1][1] == 0)
				{
					arr[a][0] = -3, arr[a][1] = -1, arr[a][2] = -1;
					index = 1;
				}
			}
			else if (index == 1)
			{
				if (arr[a - 1][0] && arr[a - 1][1] && arr[a - 1][2])
				{
					flag++;
					break;
				}
				else if (arr[a - 1][1] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -2, arr[a][2] = -1;
				}
				else if (arr[a - 1][2] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -3, arr[a][2] = -1;
					index = 2;
				}
				else if (arr[a - 1][0] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -4, arr[a][2] = -1;
					index = 0;
				}
			}
			else
			{
				if (arr[a - 1][1] && arr[a - 1][2])
				{
					flag++;
					break;
				}
				else if (arr[a - 1][2] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -1, arr[a][2] = -2;
				}
				else if (arr[a - 1][1] == 0)
				{
					arr[a][0] = -1, arr[a][1] = -1, arr[a][2] = -4;
					index = 1;
				}
			}
		}
	}
	if (flag) printf("blocked!\n");
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < 3; b++)
			{
				if (arr[a][b] == -1) printf("0");
				else if (arr[a][b] == -2) printf("|");
				else if (arr[a][b] == -3) printf("/");
				else if (arr[a][b] == -4) printf("\\");
				else if (arr[a][b] == -5) printf("X");
			}
			printf("\n");
		}
	}
	return 0;
}