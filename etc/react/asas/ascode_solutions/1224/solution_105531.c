#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct dic {
	char menu[16]; //혹시 오류 생기면 20으로 변경하기
	int price;
}list[10];
int main(void)
{
	int tc, n, real, a ,b, total = 0, buyNum, bill; //n이 구조체, real이 실제 필요한 음료 갯수
	int money, coin500, coin100;
	scanf("%d", &tc);
	while (tc--)
	{
		total = 0, money = 0, bill = 0, coin500=0, coin100=0;
		char sentence[16] = { 0 };
		scanf("%d", &n);
		for (a = 0; a < n; a++)
		{
			scanf(" %s %d", list[a].menu, &list[a].price);
		}
		scanf("%d", &real);
		for (a = 0; a < real; a++)
		{
			scanf(" %s %d", sentence, &buyNum);
			for (b = 0; b < n; b++) //list 모두 검사
			{
				if (strcmp(sentence, list[b].menu) == 0)
				{
					total += list[b].price * buyNum;
					break;
				}
			}
		}
		for (; money < total;)
		{
			money += 1000;
		}
		printf("Total:%d Money:%d ", total, money);
		int minus = money - total;
		for (; money >= 10000;)
		{
			money -= 10000;
			bill++;
		}
		for (; money >= 5000;)
		{
			money -= 5000;
			bill++;
		}
		for (; money >= 1000;)
		{
			money -= 1000;
			bill++;
		}
		printf("Bill:%d Change:%d", bill, minus);
		for (; minus >= 500;)
		{
			minus -= 500;
			coin500++;
		}
		for (; minus >= 100;)
		{
			minus -= 100;
			coin100++;
		}
		printf("(500:%d 100:%d)\n", coin500, coin100);
	}
	return 0;
}