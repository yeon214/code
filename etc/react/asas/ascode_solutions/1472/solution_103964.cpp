#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[1001] = { 0 }, arr2[1001] = { 0 };
		char result[1001] = { 0};
		int english[26] = { 0 }, english2[26] = { 0 };
		scanf("%s %s", arr, arr2);
		int len = strlen(arr), len2 = strlen(arr2), index = 0;
		for (int j = 0; j < len; j++)
		{
			english[(arr[j] - 97)]++;
		}
		for (int j = 0; j < len2; j++)
		{
			english2[(arr2[j] - 97)]++;
		}
		for (int j = 0; j < 26; j++)
		{
			if (english[j] > 0 && english2[j] > 0)
			{
				if (english[j] > english2[j])
				{
					for (int k = 0; k < english2[j]; k++)
					{
						result[index] = j + 97;
						index++;
					}
				}
				else
				{
					for (int k = 0; k < english[j]; k++)
					{
						result[index] = j + 97;
						index++;
					}
				}
			}
		}
		int lenIndex = strlen(result);
		sort(result, result + lenIndex);
		printf("%s\n", result);
	}

	return 0;
}