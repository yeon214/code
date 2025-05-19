#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[3][3] = { 0 }, num1 = 0, num2 = 0;
		int line1 = 0, line2 = 0, count1 = 0, count2 = 0;
		for (int j = 0; j < 3; j++) //배열 스캔 받음
		{
			for (int k = 0; k < 3; k++)
			{
				scanf("%d", &arr[j][k]);
			}
		}
		for (int j = 0; j < 3; j++) // 1과 2의 갯수 세는 코드
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
		for (int j = 0; j < 3; j++) // 빙고줄 1 체크 가로
		{
			count1 = 0;
			for (int k = 0; k < 3; k++)
			{
				if (arr[j][k] == 1)
				{
					count1++;
				}
			}
			if (count1 == 3)
			{
				line1++;
			}
		}
		for (int j = 0; j < 3; j++) // 빙고줄 1 체크 세로
		{
			count1 = 0;
			for (int k = 0; k < 3; k++)
			{
				if (arr[k][j] == 1)
				{
					count1++;
				}
			}
			if (count1 == 3)
			{
				line1++;
			}
		}
		count1 = 0;
		for (int j = 0; j < 3; j++) //왼쪽 위에서 오른쪽 아래
		{
			if (arr[j][j] == 1)
			{
				count1++;
			}
		}
		if (count1 == 3)
		{
			line1++;
		}
		count1 = 0;
		for (int j = 0; j < 3; j++) //왼쪽 아래에서 오른쪽 위
		{
			if (arr[j][2 - j] == 1)
			{
				count1++;
			}
		}
		if (count1 == 3)
		{
			line1++;
			// 1 빙고줄 체크 완료
		}
		for (int j = 0; j < 3; j++) // 빙고줄 2 체크 가로
		{
			count2 = 0;
			for (int k = 0; k < 3; k++)
			{
				if (arr[j][k] == 2)
				{
					count2++;
				}
			}
			if (count2 == 3)
			{
				line2++;
			}
		}
		for (int j = 0; j < 3; j++) // 빙고줄 2 체크 세로
		{
			count2 = 0;
			for (int k = 0; k < 3; k++)
			{
				if (arr[k][j] == 2)
				{
					count2++;
				}
			}
			if (count2 == 3)
			{
				line2++;
			}
		}
		count2 = 0;
		for (int j = 0; j < 3; j++) //왼쪽 위에서 오른쪽 아래
		{
			if (arr[j][j] == 2)
			{
				count2++;
			}
		}
		if (count2 == 3)
		{
			line2++;
		}
		count2 = 0;
		for (int j = 0; j < 3; j++) //왼쪽 아래에서 오른쪽 위
		{
			if (arr[j][2 - j] == 2)
			{
				count2++;
			}
		}
		if (count2 == 3)
		{
			line2++;
		}
		// 2 빙고줄 체크 완료

		/*
		돌개수만 확인  -> 
		line변수로 승자 판단 -> 
		승자가 있더라도 다시 돌 개수 확인 -> 
		승자 없을때 정상적인 상태 확인*/

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
			if (line1&&line2)
			{
				printf("NO\n");
			}
			else if (line1 == 1 || line1 == 2)
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
			else if (line2 == 1)
			{
				if (num1 == num2)
				{
					printf("2\n");
				}
				else
				{
					printf("NO\n");
				}
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
	return 0;
}