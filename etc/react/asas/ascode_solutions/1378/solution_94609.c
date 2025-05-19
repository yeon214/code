#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);


        for (int i = 0; i < N; i++) {

            for (int j = 0; j < N - i - 1; j++) {
                printf(" ");
            }

            for (int j = 0; j <= i; j++) {
                printf("%c", 'A' + j);
            }

            for (int j = i - 1; j >= 0; j--) {
                printf("%c", 'A' + j);
            }
            printf("\n");
        }

        for (int i = N - 2; i >= 0; i--) {

            for (int j = 0; j < N - i - 1; j++) {
                printf(" ");
            }

            for (int j = 0; j <= i; j++) {
                printf("%c", 'A' + j);
            }

            for (int j = i - 1; j >= 0; j--) {
                printf("%c", 'A' + j);
            }
            printf("\n");
        }
    }

    return 0;
}