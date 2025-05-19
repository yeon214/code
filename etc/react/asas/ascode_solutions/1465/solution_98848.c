#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
 {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        long long total = 0;
        scanf("%d %d", &n, &m);
        for (int j = n; j <= m; j++)
        {
            total += j;
        }
        printf("%lld\n", total);
    }
    return 0;
}