#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int test, n;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        scanf("%d", &n);
        int a[100] = { 0 };
        for (int p = 0; p < n; p++) {
            scanf("%d", &a[p]);
        }
        int temp = 0;
        for (int p = 0; p < n - 1; p++) {
            for (int k = 0; k < n - 1 - p; k++) {
                if (a[k] > a[k + 1]) {
                    temp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = temp;
                }
            }
        }
        double sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += a[j];
        }
        printf("%.1lf\n", sum / 5.0);
    }
}