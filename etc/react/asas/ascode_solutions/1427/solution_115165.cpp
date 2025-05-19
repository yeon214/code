#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int search(int paper[], int target, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (binary_search(paper, paper + n, target - paper[i] - paper[j] - paper[k]) == 1) {
					printf("Yes\n");
					return 0;
				}
			}
		}
	}
	printf("No\n");
	return 0;
}
int main(void) {
	int n, m, paper[200], target;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &paper[i]);
	}
	sort(paper, paper + n);
	while (m--) {
		scanf("%d", &target);
	    search(paper, target, n);
	}
	return 0;
}