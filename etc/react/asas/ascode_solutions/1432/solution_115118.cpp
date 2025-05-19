#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	int m;
	scanf("%d", &m);
	int M = m * m;
	for (int i = 1; i < m; i++) {
		for (int j = i; j < m; j++) {
			if (i * i + j * j <= M) {
				double result = sqrt(i * i + j * j);
				int resultInt = (int)result;
				if (resultInt - result == 0) {
					printf("%d, %d, %d\n", i, j, resultInt);
				}
			}
		}
	}
	return 0;
}