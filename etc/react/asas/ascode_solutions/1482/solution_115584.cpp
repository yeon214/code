#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	int n;
	unsigned long long num = 2432902008176640000, multi = 1;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		multi *= i;
	}
	cout << num / multi;
	return 0;
}