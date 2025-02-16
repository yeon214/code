#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
    int n, sum;
    vector <int> list;
    while (1) {
        list.clear();
        scanf("%d", &n);
        if (n == -1) break;
        for (int a = 2; a <= sqrt(n); a++) {
            if (n % a == 0) {
                if (n / a == a) list.push_back(a);
                else {
                    list.push_back(a);
                    list.push_back(n / a);
                }
            }
        }
        sort(list.begin(), list.end());
        sum = 1;
        for (int a : list) {
            sum += a;
        }
        if (sum == n) {
            printf("%d = 1 + ", n);
            for (int a = 0; a < list.size(); a++) {
                printf("%d ", list[a]);
                if (a != list.size() - 1) printf("+ ");
            }
            printf("\n");
        }
        else printf("%d is NOT perfect.\n", n);
    }
    return 0;
}