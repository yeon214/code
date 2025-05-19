#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, arr[50] = { 0 }, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b, temp;
		scanf("%d %d", &a, &b);
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}