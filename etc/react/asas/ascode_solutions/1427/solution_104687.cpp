#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
bool judgment(int* arr, int n, int target)
{
    int i, j, k, l, o, p;
    for (j = 0; j < n; j++)
    {
        for (l = 0; l < n; l++)
        {
            for (o = 0; o < n; o++)
            {
                for (int p = 0; p < n; p++)
                {
                    if (target == arr[j] + arr[l] + arr[o] + arr[p])
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main(void)
{
    int arr[200] = { 0 }, test, n;
    int i, k;
    scanf("%d %d", &n, &test);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    for (i = 0; i < test; i++)
    {
        scanf("%d", &k);
        bool result = judgment(arr, n, k);
        printf(result ? "Yes\n" : "No\n");
    }
    return 0;
}