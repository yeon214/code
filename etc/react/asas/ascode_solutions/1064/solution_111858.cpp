#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		char num[8];
		scanf("%lld", &num);
		printf("%s\n", num);
	}
	return 0;
}