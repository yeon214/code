#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, arr[100] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int a, b, temp = 0, count = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}