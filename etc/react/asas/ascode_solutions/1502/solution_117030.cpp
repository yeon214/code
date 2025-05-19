#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main(void){
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		string sentence;
		int count = 0, english[26] = { 0 };
		cin >> sentence;
		for (int i = 0; i < sentence.length(); i++) {
			if (sentence[i] >= 'a' && sentence[i] <= 'z') english[sentence[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (english[i]) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}