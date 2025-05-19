#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int price, day = 0;
		scanf("%d", &price);
		for (; price > 0; day++)
		{
			if (day % 7 < 5)
			{
				price -= 40000;
			}
			else
			{
				price -= 90000;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}