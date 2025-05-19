#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void number(int a)
{
	if (a == 2) printf("이");
    else if (a == 3) printf("삼");
	else if (a == 4) printf("사");
	else if (a == 5) printf("오");
	else if (a == 6) printf("육");
	else if (a == 7) printf("칠");
	else if (a == 8) printf("팔");
	else if (a == 9) printf("구");
}
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char num[5] = { 0 };
		scanf("%s", num);
		int n = atoi(num);
		if (n >= 1000) //자릿수 4개
		{
			for (int j = 0; j < 4; j++)
			{
				if (num[j] != '0')
				{
					number(int(num[j]-'0'));
					if (j==0) printf("천");
					else if (j==1) printf("백");
					else if (j==2) printf("십");
				}
			}
			if (num[3] - '0' == 1) printf("일");
		}
		else if (n >= 100) //3개
		{
			for (int j = 0; j < 3; j++)
			{
				if (num[j] != '0')
				{
					number(int(num[j] - '0'));
					if (j == 0) printf("백");
					else if (j == 1) printf("십");
				}
			}
			if (num[2] - '0' == 1) printf("일");
		}
		else if (n >= 10) //2
		{
			for (int j = 0; j < 2; j++)
			{
				if (num[j] != '0')
				{
					number(int(num[j] - '0'));
					if (j == 0) printf("십");
				}
			}
			if (num[1] - '0' == 1) printf("일");
		}
		else //1
		{
			number(int(num[0] - '0'));
			if (num[0] - '0' == 1) printf("일");
		}
		printf("\n");
	}
	return 0;
}