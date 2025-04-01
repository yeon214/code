#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue> //선입선출
using namespace std;
int main(void) {
	int testcase, n, number;
	char sentence[4];
	scanf("%d", &testcase);
	while (testcase--) {
		queue<int> q;
		scanf("%d", &n);
		while (n--) {
			scanf("%s", sentence);
			if (sentence[0] == 'I' && sentence[1] == 'n') {
				scanf("%d", &number);
				q.push(number);
			}
			else { //out일 때
				if (q.empty() == true) printf("Empty\n");
				else {
					printf("%d\n", q.front());
					q.pop();
				}
			}
		}
	}
	return 0;
}