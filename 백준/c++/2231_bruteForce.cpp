#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	int n, sum, result = 0;
	string str;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum = i;
		str = to_string(i);
		for (char word : str) {
			sum += word - '0';
		}
		if (sum == n) {
			result = i;
			break;
		}
	}
	printf("%d", result);
}