#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int arr[3] = { 0 };
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j]);
        }
        sort(arr, arr + 3);
        if (arr[0] + arr[1] <= arr[2])
        {
            printf("No triangle!\n");
        }
        else
        {
            if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
            {
                double r = (arr[0] + arr[1] - arr[2]) / (double)2;
                printf("%d\n", (int)r);
            }
            else
            {
                printf("No right triangle!\n");
            }
        }
    }
    return 0;
}