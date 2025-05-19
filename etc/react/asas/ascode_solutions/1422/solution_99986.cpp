#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int price, money=10000, day=0, count=0;
		scanf("%d", &price);
		for (; price > 0;)
		{
			price -= money * 6;
			count++;
			if (money < 15000 && count == 7)
			{
				money += 500;
				count = 0;
			}
			day++;

		}
		printf("%d\n", day);
	}
	return 0;
}