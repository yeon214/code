#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = n / 5; i >= 0; i--) {
		if ((n - i * 5) % 3 == 0) {
			printf("%d", i + (n - i * 5) / 3);
			return 0;
		}
	}
	printf("%d", -1);
}