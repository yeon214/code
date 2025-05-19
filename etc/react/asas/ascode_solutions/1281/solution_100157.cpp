#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int price = 0, count = 0;
		char arr[5] = { 0 }, arr2[5] = { 0 };
		scanf("%s %s", arr, arr2);
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] == arr2[j])
			{
				price += 30000;
				count++;
			}
		}
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if (j != k)
				{
					if (arr[j] == arr2[k])
					{
						price += 5000;
						count++;
					}
				}
			}
		}
		if (count == 0)
		{
			price += 50000;
		}
		printf("%d\n", price);
	}
	return 0;
}