#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	int n, list[100000], m, target;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	sort(list, list + n);
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &target);
		printf("%d\n", binary_search(list, list + n, target));
	}
	return 0;
}