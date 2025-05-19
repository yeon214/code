#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, max = 0;
        scanf("%d", &n);
        int arr[10000] = { 0 };
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        sort(arr, arr + n, greater<int>());
        for (int j = 0; j < n-2; j++)
        {
            if (arr[j] < arr[j + 1] + arr[j + 2])
            {
                max = arr[j] + arr[j + 1] + arr[j + 2];
                break;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}