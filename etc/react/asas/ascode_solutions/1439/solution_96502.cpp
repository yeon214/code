#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, m, big = 0, small = 0;
	scanf("%d %d", &n, &m);
	
	for (; n > 0;)
	{
		if (n - 45 >= 0)
		{
			big++;
			n -= 45;
		}
		else if ((n - 45 < 0) && (n - 25 > 0))
		{
			big++;
			n -= n;
		}
		else if (n - 25 <= 0)
		{
			small++;
			n -= n;
		}
	}
	if (m >= 15)
	{
		small++;
	}
	if ((big!=0)&&(small!=0))
	{
		printf("Big bus : %d\n", big);
		printf("Small bus : %d\n", small);
	}
	else if ((big == 0) && (small != 0))
	{
		printf("Small bus : %d\n", small);
	}
	else if ((big != 0) && (small == 0))
	{
		printf("Big bus : %d\n", big);
	}
	
	return 0;
}