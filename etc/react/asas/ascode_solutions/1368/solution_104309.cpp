#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int a, b, c, result = 0;
	scanf("%d %d %d", &a, &b, &c);
	if ((a == b) && (b == c))
	{
		result += 50000 + a * 2000;
	}
	else if ((a == b) || (b == c))
	{
		result += 10000 + b * 2000;
	}
	else if (a == c)
	{
		result += 10000 + a * 2000;
	}
	else
	{
		int arr[3] = { 0 };
		arr[0] = a, arr[1] = b, arr[2] = c;
		sort(arr, arr + 3);
		result+=(int)((arr[1] + arr[2]) / (2.0)) * 500;
	}
	printf("%d", result);
	return 0;
}