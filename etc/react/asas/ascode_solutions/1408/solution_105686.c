#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void palindrome (int x)
{
	int a, count, num, b, check =0;
	for (a = 36; a >= 2; a--)
	{
		count = 0;
		num = x;
		char arr[100] = { 0 }, filp[100] = { 0 };
		for (; num > 0; count++)
		{
			if (num % a >= 10) arr[count] = num % a + 55;
			else arr[count] = num % a + 48;
			num /= a;
		}
		for (b = 0; b < count; b++)
		{
			filp[count - 1 - b] = arr[b];
		}
		if (strcmp(arr, filp) == 0)
		{
			check++;
			break;
		}
	}
	if (check) printf("YES\n");
	else printf("NO\n");
}
int main(void)
{
	int tc, x;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d", &x);
		palindrome(x);
	}
	return 0;
}