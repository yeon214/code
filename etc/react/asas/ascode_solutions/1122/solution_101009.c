#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, arr[45] = { 0 }, num, max, index;
	scanf("%d", &n);
	for (int i = 0; i < n * 6; i++)
	{
		scanf("%d", &num);
		arr[num - 1]++;
	}
	for (int j = 0; j < 6; j++)
	{
		for (int i = 44; i >= 0; i--)
		{
			if (i == 44)
			{
				max = arr[44];
				index = i;
			}
			else
			{
				if (max <= arr[i])
				{
					max = arr[i];
					index = i;
				}
			}
		}
		printf("%d ", index+1);
		arr[index] = 0;
	}
	return 0;
}