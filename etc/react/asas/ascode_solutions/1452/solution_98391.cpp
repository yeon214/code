#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    for (;;) {
        int n;
        int sum = 0;
        scanf("%d", &n);
        int i = 0;
        if (n == 0) {
            break;
        }
        else {
            int a[100] = { 0 };
            int b[100] = { 0 };
            for (i = 0; i < n; i++) {
                scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++) {
                b[i] = a[i];
            }
            int temp = 0;
            for (int k = 0; k < n - 1; k++) {
                for (int u = 0; u < n - 1 - k; u++) {
                    if (a[u] > a[u + 1]) {
                        temp = a[u];
                        a[u] = a[u + 1];
                        a[u + 1] = temp;
                    }
                }
            }
            int cou = 0;
            for (int k = 0; k < n - 1; k++) {
                for (int u = 0; u < n - 1 - k; u++) {
                    if (b[u] < b[u + 1]) {
                        cou = b[u];
                        b[u] = b[u + 1];
                        b[u + 1] = cou;
                    }
                }
            }

            for (int u = 0; u < n; u++) {
                if (a[u] == b[u]) {
                    sum++;
                }
            }
        }
        printf("%d\n", sum);
    }
}
