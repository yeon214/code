#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if (a[0] + a[1] <= a[2]) cout << (a[0] + a[1])*2 - 1;
	else cout << a[0] + a[1] + a[2];
	return 0;
}