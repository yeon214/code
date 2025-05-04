#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int n, item[5][5] = { 0 }, max = 0, indexX = 0, indexY = 0, sum = 0, x, y;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &item[i][j]);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i && j) continue;
				x = i, y = j, sum = 0;
				while (x < n && y < n) {
					sum += item[x][y];
					x++, y++;
				}
				if (max < sum) {
					max = sum;
					indexX = i, indexY = j;
				}
			}
		}
		while (indexX < n && indexY < n) {
			printf("%d ", item[indexX++][indexY++]);
		}
		printf("\n%d\n", max);
	}
	return 0;
}