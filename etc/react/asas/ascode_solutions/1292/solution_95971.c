#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int a[1000] = { 0 };
    int test, n;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) 
    {
        scanf("%d", &n);
        int sum = 0;
        double avr = 0;
        for (int k = 0; k < n; k++) 
        {
            scanf("%d", &a[k]);
            sum += a[k];
        }
        avr = sum / n;
        int count = 0;
        for (int k = 0; k < n; k++) 
        {
            if (avr < a[k]) 
            {
                count++;
            }
        }
        printf("%d from total %d\n", count, n);
    }
}