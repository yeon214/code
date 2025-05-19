#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (a == arr[i][j])
				{
					arr[i][j] = 0;
				}
			}
		}
	}
	int count = 0;
	if ((arr[0][0] == 0) && (arr[0][1] == 0) && (arr[0][2] == 0) && (arr[0][3]==0) && arr[0][4]==0)
	{
		count++;;
	}
	if (arr[1][0] == 0 && arr[1][1] == 0 && arr[1][2] == 0 && arr[1][3]==0 && arr[1][4]==0)
	{
		count++;;
	}
	if (arr[2][0] == 0 && arr[2][1] == 0 && arr[2][2] == 0 && arr[2][3]==0 && arr[2][4]==0)
	{
		count++;;
	}
	if (arr[3][0] == 0 && arr[3][1] == 0 && arr[3][2] == 0 && arr[3][3]==0 && arr[3][4]==0)
	{
		count++;;
	}
	if (arr[4][0] == 0 && arr[4][1] == 0 && arr[4][2] == 0 && arr[4][3]==0 && arr[4][4]==0)
	{
		count++;;
	}
	if (arr[0][0] == 0 && arr[1][0] == 0 && arr[2][0] == 0 && arr[3][0]==0 && arr[4][0]==0)
	{
		count++;;
	}
	if (arr[0][1] == 0 && arr[1][1] == 0 && arr[2][1] == 0 && arr[3][1]==0 && arr[4][1]==0)
	{
		count++;;
	}
	if (arr[0][3] == 0 && arr[1][3] == 0 && arr[2][3] == 0 && arr[3][3]==0 && arr[4][3]==0)
	{
		count++;;
	}
	if (arr[0][4] == 0 && arr[1][4] == 0 && arr[2][4] == 0 && arr[3][4]==0 && arr[4][4]==0)
	{
		count++;;
	}
	if (arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0 && arr[3][3]==0 && arr[4][4]==0)
	{
		count++;;
	}
	if (arr[4][0] == 0 && arr[3][1] == 0 && arr[2][2] == 0 && arr[1][3]==0 && arr[0][4]==0)
	{
		count++;;
	}
	if (arr[0][2] == 0 && arr[1][2] == 0 && arr[2][2] == 0 && arr[3][2]==0 && arr[4][2]==0)
	{
		count++;;
	}
	printf("%d", count);
	return 0;
}