#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int number, count;
	vector<int>list;
	scanf("%d %d", &number, &count);
	for (int a = 1; a <= sqrt(number); a++) {
		if (number % a == 0) {
			if (number / a == a) list.push_back(a);
			else {
				list.push_back(a);
				list.push_back(number / a);
			}
		}
	}
	sort(list.begin(), list.end());
	if (list.size() < count) printf("0");
	else printf("%d", list[count - 1]);
	return 0;
}