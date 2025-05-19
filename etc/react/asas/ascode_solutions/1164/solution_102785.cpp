#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (;;)
	{
		int a;
		int day = 0;
		int pay = 5000;
		scanf("%d", &a);
		if (a == 0) break;
		else
		{
			for (; a > 0; day++)
			{
				a -= pay;
				pay += 100;
			}
			printf("%d\n", day);
		}
	}

	return 0;
}