#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(void) {
    int n, arr[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    int gap = arr[1] - arr[0]; 
    for (int i = 1; i < n - 1; i++) {
        gap = gcd(gap, arr[i + 1] - arr[i]);
    }

    int total = (arr[n - 1] - arr[0]) / gap + 1; 
    int result = total - n; 

    printf("%d\n", result);

    return 0;
}