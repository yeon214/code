#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main() {
	char string[3];
	int count = 0, a, indexLeft, indexMiddle, indexRight;
	for (a = 0; a < 3; a++) {
		scanf("%c", &string[a]);
		if (string[a] == '1') indexMiddle = a;
		if (string[a] == '(') indexLeft = a;
		if (string[a] == ')') indexRight = a;
	}
	if (indexMiddle < indexLeft) count++;
	if (indexMiddle > indexRight) count++;
	printf("%d", count);
	return 0;
}