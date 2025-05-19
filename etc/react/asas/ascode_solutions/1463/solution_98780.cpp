#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, arr[50000] = { 0 }, a, fal=0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < m; i++)
	{
		fal = 0;
		scanf("%d", &a);
		for (int i = 0; i < n; i++)
		{
			if (a == arr[i])
			{
				printf("true\n");
				break;
			}
			else
			{
				fal++;
			}
		}
		if (fal == n)
		{
			printf("false\n");
		}
	}

	return 0;
}