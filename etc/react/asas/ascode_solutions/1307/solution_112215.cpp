#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int arrM[1500000];
int main(void) {
	int m, n, arrN[10000], count = 0;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arrM[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrN[i]);
	}
	sort(arrM,arrM+m);
	for (int i = 0; i < n; i++) {
		if (binary_search(arrM, arrM + m, arrN[i])) count++;
	}
	printf("%d", count);
}