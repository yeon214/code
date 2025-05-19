#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int a, b;
		int sum1=0, sum2=0;
		int count1 = 0, count2 = 0;
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a);
			if (a % 2 == 1) count1++;
			sum1 += a;
		}
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &b);
			if (b % 2 == 1) count2++;
			sum2 += b;
		}

		if (sum1 > sum2) printf("Joo-Ahn wins\n");
		else if (sum1 < sum2) printf("Min-Gwang wins\n");
		else if (sum1 == sum2)
		{
			if (count1 == count2) printf("Draw\n");
			else if (count1 > count2) printf("Joo-Ahn wins\n");
			else if (count1 < count2) printf("Min-Gwang wins\n");
		}
		
	}

	return 0;
}