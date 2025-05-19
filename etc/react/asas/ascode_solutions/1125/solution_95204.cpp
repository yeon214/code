#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[3][3] = { 0 };
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
		{
			if (arr[0][0] == 1)
			{
				printf("1\n");
			}
			else if (arr[0][0] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
		{
			if (arr[1][0] == 1)
			{
				printf("1\n");
			}
			else if (arr[1][0] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
		{
			if (arr[2][0] == 1)
			{
				printf("1\n");
			}
			else if (arr[2][0] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
		{
			if (arr[0][0] == 1)
			{
				printf("1\n");
			}
			else if (arr[0][0] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
		{
			if (arr[0][1] == 1)
			{
				printf("1\n");
			}
			else if (arr[0][1] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
		{
			if (arr[0][2] == 1)
			{
				printf("1\n");
			}
			else if (arr[0][2] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
		{
			if (arr[0][0] == 1)
			{
				printf("1\n");
			}
			else if (arr[0][0] == 2)
			{
				printf("2\n");
			}
		}
		else if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2])
		{
			if (arr[2][0] == 1)
			{
				printf("1\n");
			}
			else if (arr[2][0] == 2)
			{
				printf("2\n");
			}
		}
		else
		{
			printf("draw!\n");
		}
	}
	return 0;
}