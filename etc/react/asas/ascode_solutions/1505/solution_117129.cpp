#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	int n, total = 0, num;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &num);
		total ^= num;
	}
	printf("%d", total);
	return 0;
}