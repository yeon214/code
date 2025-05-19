#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, arr[20] = { 0 }, real = 0;
        double ave = 0.0;
        double differ = 0.0, compar = 0.0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            ave += arr[j];
        }
        ave /= (double)n;
        for (int j = 0; j < n; j++)
        {
            differ = ave - arr[j];
            if (differ < 0)
            {
                differ *= -1;
            }
            if (j == 0)
            {
                compar = differ;
                real = arr[j];
            }
            else
            {
                if (differ < compar)
                {
                    compar = differ;
                    real = arr[j];
                }
            }
        }
        printf("%d\n", real);
    }
    return 0;
}