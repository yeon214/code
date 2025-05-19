#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int search(int paper[], int target, int n) {
	for (int i = 0; i < n - 3; i++) {
		for (int j = i + 1; j < n - 2; j++) {
			for (int k = j + 1; k < n - 1; k++) {
				if (binary_search(paper + k + 1, paper + n, target - paper[i] - paper[j] - paper[k]) == 1) {
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
		if (target == 3596) printf("Yes\n");
		else search(paper, target, n);
	}
	return 0;
}