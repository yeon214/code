#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int h, m;
	int clock;
	scanf("%d %d", &h, &m);
	scanf("%d", &clock);

	if (h <= 11) printf("Cook start->AM%d:%d\n", h, m);
	else if (h == 12) printf("Cook start->PM12:%d\n", m);
	else printf("Cook start->PM%d:%d\n", h - 12, m);

	h += (m + clock) / 60;
	m = (m + clock) % 60;

	if (h <= 11 || h >= 24) printf("Cook end->AM%d:%d\n", h % 24, m);
	else if (h == 12) printf("Cook end->PM12:%d\n", m);
	else  printf("Cook end->PM%d:%d\n", h % 12, m);

	return 0;
}