#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, sum = 0, change = 0;
    scanf("%d", &n);
    for (int i = n - 54; i < n; i++) {
        sum = change = i;
        while (change > 0) {
            sum += change % 10;
            change /= 10;
        }
        if (sum == n) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}