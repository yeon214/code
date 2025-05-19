#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int n, arr[10000] = { 0 }, max = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i < n - 2; i++) {
			for (int j = i + 1; j < n - 1; j++) {
				for (int k = j + 1; k < n; k++) {
					if ((arr[i] + arr[j] > arr[k]) && (arr[j] + arr[k] > arr[i]) && (arr[i] + arr[k] > arr[j])) {
						if (max < arr[i] + arr[j] + arr[k]) max = arr[i] + arr[j] + arr[k];
					}
				}
			}
		}
		printf("%d\n", max);
	}
	return 0;
}