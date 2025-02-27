#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	long long num;
	cin >> num;
	cout << (num - 1) * 3 + num + 3;
	return 0;
}