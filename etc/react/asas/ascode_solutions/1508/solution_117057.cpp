#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
int main(void){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int n, change;
		char num[10] = { 0 };
		scanf("%d", &n);
		sprintf(num, "%d", n);
		for (int i = 0; i < strlen(num) / 2; i++) {
			char temp = num[strlen(num) - 1 - i];
			num[strlen(num) - 1 - i] = num[i];
			num[i] = temp;
		}
		change = atoi(num);
		if (change == n) printf("Same!\n");
		else printf("%d\n", max(change, n) - min(change, n));
	}
	return 0;
}