#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main(void){
	int n, m, number, target, list[100000] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &target);
		if (target >= 0 && target < 100000) list[target]++;
	}
	while (m--) {
		scanf("%d", &target);
		if (list[target]) printf("true\n");
		else printf("false\n");
	}
	return 0;
}