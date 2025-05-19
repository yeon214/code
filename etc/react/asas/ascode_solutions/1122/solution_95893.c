#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int arr[45] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 6; i++)
	{
		int a;
		scanf("%d", &a);
		arr[a - 1]++;
	}
	for (int i = 0; i < 6; i++)
	{
		int max = 0, x = 0;
		for (int j = 44; j >= 0; j--)
		{
			if (j == 44)
			{
				max = arr[j];
				x = j;
			}
			else
			{
				if (max <= arr[j])
				{
					max = arr[j];
					x = j;
				}
			}
		}
		printf("%d ", x+1);
		arr[x] = 0;
	}
	return 0;
}