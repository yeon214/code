#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
union tt {
    char d[8];
    long long p;
};
int main() {
    int testCase;
    scanf("%d", &testCase);
    tt t;
    for (int i = 0; i < testCase; i++) {
        scanf("%lld", &t.p);
        printf("%s\n", t.d);
    }
}