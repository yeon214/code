#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[3] = { 0 }, arr2[3] = { 0 }; //1 지원 2 승환
		int sum = 0, sum2 = 0, count = 0, count2 = 0;
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
			if (arr[j] % 2 == 0) count++;
		}
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr2[j]);
			sum2 += arr2[j];
			if (arr2[j] % 2 == 0) count2++;
		}
		sort(arr, arr + 3);
		sort(arr2, arr2 + 3);
		if (sum > sum2)
		{
			printf("Jiwon wins.\n");
		}
		else if (sum < sum2)
		{
			printf("Seungwhan wins.\n");
		}
		else
		{
			if (arr[2] - arr[0] > arr2[2] - arr2[0])
			{
				printf("Jiwon wins.\n");
			}
			else if (arr[2] - arr[0] < arr2[2] - arr2[0])
			{
				printf("Seungwhan wins.\n");
			}
			else
			{
				if (count > count2)
				{
					printf("Jiwon wins.\n");
				}
				else if (count < count2)
				{
					printf("Seungwhan wins.\n");
				}
				else
				{
					printf("Draw!\n");
				}
			}
		}
	}
	return 0;
}