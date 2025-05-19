#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int find(int n, int list[], int example) {
	int min = 0;
	int max = n - 1;
	int mid;

	while (1) {
		mid = (min + max) / 2;
		if (list[mid] == example) return 1;
		else if (example > list[mid]) min = mid + 1;
		else max = mid - 1;

		if (min > max) return 0;
	}
}
int main(void){
	int n, m, number, example, list[100000] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	while (m--) {
		scanf("%d", &example);
		if (find(n, list, example)) printf("true\n");
		else printf("false\n");
	}
	return 0;
}