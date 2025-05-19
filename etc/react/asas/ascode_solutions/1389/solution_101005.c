#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, arr[1000] = { 0 }, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &num);
	for (int i = 0; i < n; i++)
	{
		if (num < arr[i])
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}