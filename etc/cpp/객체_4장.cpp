#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void p8();
void p9();
void p13();
int main() {
	p8();
	p9();
	p13();
}
void p8() {
	string sentence;
	int english = 0, number = 0, blank = 0;
	printf("문장을 입력하세요 : ");
	getline(cin, sentence);
	for (int i = 0; i < sentence.length(); i++) {
		if ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z')) english++;
		if (sentence[i] >= '1' && sentence[i] <= '9') number++;
		if (sentence[i] == ' ') blank++;
	}
	printf("알파벳 : %d, 숫자 : %d, 빈칸 : %d\n", english, number, blank);
}
void p9() {
	string sentence;
	int blank = 0;
	printf("문장을 입력하세요 : ");
	getline(cin, sentence);
	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] == ' ') blank++;
	}
	printf("단어의 개수 : %d\n", blank + 1);
}
void p13() {
	string sentence, target, change;
	printf("전체 문장을 입력하세요 : ");
	getline(cin, sentence);
	printf("타겟 문장을 입력하세요 : ");
	getline(cin, target);
	printf("바꿀 문장을 입력하세요 : ");
	getline(cin, change);
	int index = sentence.find(target);
	sentence.replace(index, change.length(), change);
	cout << sentence;
}