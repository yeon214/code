#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int n, i = 1;
	scanf("%d", &n);
	while (n > i) {
		n -= i;
		i++;
	}
	if (i % 2 == 0) printf("%d/%d\n", n, i - n + 1);
	else printf("%d/%d\n",  i - n + 1, n);
	return 0;
}