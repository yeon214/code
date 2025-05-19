#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		string num;
		int formation; //진법
		cin >> num >> formation;
		if (num.find(".") == string::npos) {
			long long total = 0;
			for (int i = 0; i < num.length() / 2; i++) {
				char temp = num[i];
				num[i] = num[num.length() - 1 - i];
				num[num.length() - 1 - i] = temp;
			} //여기까지 문제 없음
			for (int i = 0; i < num.length(); i++) {
				long long multi = 1;
				for (int j = 0; j < i; j++) {
					multi *= formation;
				}
				if (num[i] >= 'A' && num[i] <= 'Z') total += multi * (num[i] - 55);
				else total += multi * (num[i] - '0');
			}
			printf("%lld\n", total);
		}
		else {
			int index = num.find(".");
			long long longlongTotal = 0;
			double doubleTotal = 0.0;
			char resultChar[21] = { 0 };
			for (int i = 0; i < index / 2; i++) {
				char temp = num[i];
				num[i] = num[index - 1 - i];
				num[index - 1 - i] = temp;
			} //ㅇㅋ
			for (int i = 0; i < index; i++) {
				long long multi = 1;
				for (int j = 0; j < i; j++) {
					multi *= formation;
				}
				if (num[i] >= 'A' && num[i] <= 'Z') longlongTotal += multi * (num[i] - 55);
				else longlongTotal += multi * (num[i] - '0');
			} //ㅇㅋ
			for (int i = index + 1; i < num.length(); i++) {
				long long multi = 1;
				for (int j = index; j < i; j++) {
					multi *= formation;
				}
				if (num[i] >= 'A' && num[i] <= 'Z') doubleTotal += (1.0 / multi) * (num[i] - 55);
				else doubleTotal += (1.0 / multi) * (num[i] - '0');
			}
			sprintf(resultChar, "%.10lf", doubleTotal);
			printf("%lld.", longlongTotal);
			for (int i = 2; i < 12; i++) {
				if (resultChar[i] >= '0' && resultChar[i] <= '9') printf("%c", resultChar[i]);
				else printf("0");
			}
			printf("\n");
		}
	}
	return 0;
}