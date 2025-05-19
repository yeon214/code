#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void)
{
	stack<int> stkStack;
	int x;
	while (1) {
		string str;
		cin >> str;
		if (str == "END") return 0;
		if (str == "PUSH") {
			cin >> x;
			stkStack.push(x);
		}
		if (str == "POP") {
			if (stkStack.empty()) printf("ERROR\n");
			else {
				printf("%d\n", stkStack.top());
				stkStack.pop();
			}
		}
		if (str == "SIZE") {
			printf("%ld\n", stkStack.size());
		}
		if (str == "CLEAR") {
			stkStack = stack<int>();
		}
	}
}
