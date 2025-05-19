#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void odd(int a)
{
	printf("%d", a);
}
void even(int a)
{
	printf("%d", a + 1);
}
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 1)
	{
		odd(n);
	}
	else if (n % 2 == 0)
	{
		even(n);
	}
}