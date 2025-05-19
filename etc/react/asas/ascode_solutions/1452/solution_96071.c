#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (;;)
	{
		int n, arra[100] = { 0 }, arrb[100] = { 0 }; //a 오름차순 b 내림차순
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &arra[i]);
			}
			for (int i = 0; i < n; i++)
			{
				arrb[i] = arra[i];
			}
			int temp = 0;
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - 1 - i; j++)
				{
					if (arra[j] > arra[j + 1])
					{
						temp = arra[j];
						arra[j] = arra[j + 1];
						arra[j + 1] = temp;
					}
				}
			}
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - 1 - i; j++)
				{
					if (arrb[j] < arrb[j + 1])
					{
						temp = arrb[j];
						arrb[j] = arrb[j + 1];
						arrb[j + 1] = temp;
					}
				}
			}
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				if (arra[i] == arrb[i])
				{
					count++;
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}