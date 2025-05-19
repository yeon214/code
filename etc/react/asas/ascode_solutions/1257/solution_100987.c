#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	for (;;)
	{
		int n, result = 0, check = 0, check2=0;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 2; i < n; i++)
		{
			int num = i, num2 = n - i;
			check = 0, check2 = 0;
			if (num > num2) break;
			for (int j = 2; j <= sqrt(num); j++)
			{
				if (num % j == 0)
				{
					check++; //소수가 아님
					break;
				}
			}
			if (check == 0)
			{
				for (int j = 2; j <= sqrt(num2); j++)
				{
					if (num2 % j == 0)
					{
						check2++; //소수가 아님
						break;
					}
				}
			}
			if (check == 0 && check2 == 0) result++;
		}
		printf("%d\n", result);
	}
	return 0;
}