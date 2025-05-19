#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, a=-1;
		int arr[10] = { 65,66,67,71,74,76,77,80,84 };
		scanf("%d", &n);
		if (n % 2 == 1) // 홀수
		{
			for (int j = 0; j < (n + 1) / 2; j++)
			{
				a = -1;
				for (int k = 0; k < (n + 1) / 2; k++)
				{
					if (j >= k)
					{
						a++;
					}
					printf("%c", arr[a]);
				} // 1/4
				if (j == (n + 1) / 2 - 1)
				{
					a = j - 1;
				}
				else
				{
					a = j;
				}
				for (int k = 0; k < n / 2; k++)
				{
					printf("%c", arr[a]);
					if (j + k >= n / 2 - 1)
					{
						a--;
					}
				}
				printf("\n");
			}
			for (int j = 0; j < n / 2; j++)
			{
				a = 0;
				for (int k = 0; k < (n + 1) / 2; k++)
				{
					printf("%c", arr[a]);
					if (k != (n + 1) / 2 - 1)
					{
						if (j + k < n/2-1)
						{
							a++;
						}
					}
				} // 3/4
				a = n / 2 - 1 - j;
				for (int k = 0; k < n / 2; k++)
				{
					printf("%c", arr[a]);
					if (j <= k)
					{
						a--;
					}
				} //4/4
				printf("\n");
			}
			
		}
		else //짝수
		{
			for (int j = 0; j < n / 2; j++)
			{
				a = 0;
				for (int k = 0; k < n / 2; k++)
				{
					printf("%c", arr[a]);
					if (j > k)
					{
						a++;
					}
				} // 1/4
				a = j;
				for (int k = 0; k < n / 2; k++)
				{
					printf("%c", arr[a]);
					if (j + k >= n/2-1)
					{
						a--;
					}
				} // 2/4
				printf("\n");
			}
			for (int j = 0; j < n / 2; j++)
			{
				a = 0;
				for (int k = 0; k < n / 2; k++)
				{
					printf("%c", arr[a]);
					if (j + k < n / 2 - 1)
					{
						a++;
					}
				}
				a = n / 2 - 1 - j;
				for (int k = 0; k < n / 2; k++)
				{
					printf("%c", arr[a]);
					if (j<=k)
					{
						a--;
					}
				}
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}