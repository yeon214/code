#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a1[3] = { 0 }, a2[3] = { 0 };
		int sum1 = 0, sum2 = 0, max1 = 0, min1 = 0, max2=0, min2=0; //1 지원 2 승환
		int even1 = 0, even2 = 0;
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a1[j]);
		}
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a2[j]);
		}
		for (int j = 0; j < 3; j++)
		{
			if (a1[j] % 2 == 0)
			{
				even1++;
			}
		}
		for (int j = 0; j < 3; j++)
		{
			if (a2[j] % 2 == 0)
			{
				even2++;
			}
		}
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				max1 = a1[j];
				min1 = a1[j];
			}
			else
			{
				if (max1 < a1[j])
				{
					max1 = a1[j];
				}
				else if (min1 > a1[j])
				{
					min1 = a1[j];
				}
			}
		}
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				max2 = a2[j];
				min2 = a2[j];
			}
			else
			{
				if (max2 < a2[j])
				{
					max2 = a2[j];
				}
				else if (min2 > a2[j])
				{
					min2 = a2[j];
				}
			}
		}
		if (sum1 > sum2)
		{
			printf("Jiwon wins.\n");
		}
		else if (sum1 < sum2)
		{
			printf("Seungwhan wins.\n");
		}
		else
		{
			if (max1 - min1 > max2 - min2)
			{
				printf("Jiwon wins.\n");
			}
			else if (max1 - min1 < max2 - min2)
			{
				printf("Seungwhan wins.\n");
			}
			else
			{
				if (even1 > even2)
				{
					printf("Jiwon wins.\n");
				}
				else if (even1 < even2)
				{
					printf("Seungwhan wins.\n");
				}
				else
				{
					printf("Draw!\n");
				}
			}
		}
	}
	return 0;
}