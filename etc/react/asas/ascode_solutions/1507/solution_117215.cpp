#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int human[50] = { 0 }, n, minInt = 1000, minus;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &human[i]);
		}
		sort(human, human + n, greater<int>());
		for (int i = 0; i < n - 1; i++) {
			minus = human[i] - human[i + 1];
			minInt = min(minus, minInt);
		}
		printf("%d\n", minInt);
	}
	return 0;
}