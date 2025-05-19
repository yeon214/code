#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	int n, arr[100000], q, target;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &q);
	while (q--) {
		scanf("%d", &target);
		int index = lower_bound(arr, arr + n, target) - arr;
		if (arr[index] == target) printf("%d\n", index);
		else printf("-1\n");
	}
	return 0;
}