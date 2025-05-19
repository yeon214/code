#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[3][3] = { 0 }, num1 = 0, num2 = 0;
		for (int j = 0; j < 3; j++) // 스캔받기
		{
			for (int k = 0; k < 3; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		for (int j = 0; j < 3; j++) // 원소 개수 세기
		{
			for (int k = 0; k < 3; k++)
			{
				if (arr[j][k] == 1)
				{
					num1++;
				}
				else if (arr[j][k] == 2)
				{
					num2++;
				}
			}
		}
		if (num2 > num1)
		{
			printf("NO\n");
		}
		else if (num1 - num2 > 1)
		{
			printf("NO\n");
		}
		else
		{
			int line1 = 0, line2 = 0, count1 = 0, count2 = 0;
			for (int j = 0; j < 3; j++) // 가로 체크
			{
				count1 = 0, count2 = 0;
				for (int k = 0; k < 3; k++)
				{
					if (arr[j][k] == 1)
					{
						count1++;
					}
					else if (arr[j][k] == 2)
					{
						count2++;
					}
				}
				if (count1 == 3)
				{
					line1++;
				}
				else if (count2 == 3)
				{
					line2++;
				}
			}
			for (int j = 0; j < 3; j++) // 세로 체크
			{
				count1 = 0, count2 = 0;
				for (int k = 0; k < 3; k++)
				{
					if (arr[k][j] == 1)
					{
						count1++;
					}
					else if (arr[k][j] == 2)
					{
						count2++;
					}
				}
				if (count1 == 3)
				{
					line1++;
				}
				else if (count2 == 3)
				{
					line2++;
				}
			}
			count1 = 0, count2 = 0;
			for (int j = 0; j < 3; j++) // 대각선 체크
			{
				if (arr[j][j] == 1)
				{
					count1++;
				}
				else if (arr[j][j] == 2)
				{
					count2++;
				}
			}
			if (count1 == 3)
			{
				line1++;
			}
			else if (count2 == 3)
			{
				line2++;
			}
			count1 = 0, count2 = 0;
			for (int j = 0; j < 3; j++) // 왼쪽 아래에서 오른쪽 위 대각선 체크
			{
				if (arr[j][2-j] == 1)
				{
					count1++;
				}
				else if (arr[j][2-j] == 2)
				{
					count2++;
				}
			}
			if (count1 == 3)
			{
				line1++;
			}
			else if (count2 == 3)
			{
				line2++;
			}
			// 여기서부터 출력
			if (line1 && line2)
			{
				printf("NO\n");
			}
			else if (line1 >= 1)
			{
				if (num1 - num2 == 1)
				{
					printf("1\n");
				}
				else
				{
					printf("NO\n");
				}
			}
			else if (line2 >= 1)
			{
				if (num1 - num2 == 0)
				{
					printf("2\n");
				}
				else
				{
					printf("NO\n");
				}
			}
			else
			{
				if (num1 < num2 || num1 - num2>1)
				{
					printf("NO\n");
				}
				else if (num1 + num2 == 9)
				{
					printf("DRAW\n");
				}
				else
				{
					printf("YES\n");
				}
			}
		}
	}
	return 0;
}