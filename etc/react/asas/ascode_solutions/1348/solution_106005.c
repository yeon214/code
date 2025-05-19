#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[5000001]; //전역은 이것도 괜찮지 않을까 싶은데.. 스택 메모리 제한은 지역변수 해당
int main() 
{
    int tc, m, n, a, b, result;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d %d", &m, &n);
        result = 0;
        if (m > n)
        {
            int temp = m;
            m = n;
            n = temp;
        }
        if (m == 1) m++;
        for (a = 2; a <= n; a++)
        {
            for (b = 2; a * b <= n; b++)
            {
                arr[a * b] = 1;
            }
        }
        for (a = m; a <= n-12; a++)
        {
            if (arr[a] == 0 && arr[a + 6] == 0 && arr[a + 12] == 0)
            {
                printf("%d: %d-%d-%d\n", ++result, a, a + 6, a + 12);
            }
        }
        if (result == 0) printf("No Sexy Prime Triplets!\n");
    }
    return 0;
}