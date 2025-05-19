#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(void) 
{
    int n;
    for (; scanf("%d", &n)!=EOF;)
    {
        int arr[3000] = { 0 }, result[3000] = { 0 };
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            result[i] = abs(arr[i] - arr[i + 1]);
        }
        sort(result, result + (n-1));
        for (int i = 1; i <= n - 1; i++)
        {
            if (result[i - 1] != i)
            {
                check++;
                break;
            }
        }
        if (check == 0) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}