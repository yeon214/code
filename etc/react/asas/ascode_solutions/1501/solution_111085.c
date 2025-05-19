#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc, a;
	scanf("%d", &tc);
	while (tc--) {
		char num1[101], num2[101];
		scanf("%s %s", num1, num2);
		int len = strlen(num1);
		for (a = 0; a < len; a++) {
			printf("%d", num1[a] ^ num2[a]);
		}
		printf("\n");
	}
	return 0;
}