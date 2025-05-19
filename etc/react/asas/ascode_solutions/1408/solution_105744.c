#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void palindrome (int x)
{
	int a, count, num, b, check, no;
	for (a = 36; a >= 2; a--)
	{
		count = 0, check = 0, no = 0;
		num = x;
		char arr[100] = { 0 };
		for (; num > 0; count++)
		{
			if (num % a >= 10) arr[count] = num % a + 55;
			else arr[count] = num % a + 48;
			num /= a;
		}
		for (b = 0; b < count / 2; b++)
		{
			if (arr[b] != arr[count - b - 1])
			{
				check++;
			}
		}
		if (check == 0)
		{
			printf("YES\n");
			no++;
			break;
		}
	}
	if (no == 0)
	{
		printf("NO\n");
	}
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