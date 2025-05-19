#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void){
	long long n;
	while (scanf("%lld", &n) != EOF) {
		char arr[100] = { 0 };
		int index = 0;
		long long result = 0;
		while (n) {
			arr[index++] = n % 2;
			n /= 2;
		}
		for (int i = 0; i < index/2; i++) {
			char temp = arr[index - 1 - i];
			arr[index - 1 - i] = arr[i];
			arr[i] = temp;
		}
		for (int i = 0; i < index; i++) {
			long long multi = 1;
			for (int j = 0; j < i; j++) {
				multi *= 2;
			}
			multi *= arr[i];
			result += multi;
		}
		printf("%lld\n", result);
	}
	return 0;
}