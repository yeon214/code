#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 5000000

bool is_prime[MAX + 13];  // MAX + 12까지 소수를 판별하기 위한 배열

void sieve_of_eratosthenes(int n) {
    for (int i = 2; i <= n; i++) {
        is_prime[i] = true;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main(void) {
    int t;
    scanf("%d", &t);
    sieve_of_eratosthenes(MAX + 12);  // 소수 배열 초기화 (n+12까지)

    for (int i = 0; i < t; i++) {
        int m, n, result = 0;
        scanf("%d %d", &m, &n);

        if (m > n) {
            int temp = m;
            m = n;
            n = temp;
        }

        for (int j = m; j <= n - 12; j++) {
            if (is_prime[j] && is_prime[j + 6] && is_prime[j + 12]) {
                result++;
                printf("%d: %d-%d-%d\n", result, j, j + 6, j + 12);
            }
        }

        if (result == 0) {
            printf("No Sexy Prime Triplets!\n");
        }
    }
    return 0;
}