#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int arr[100001];
int main(void)
{
    int tc, m, n, i, j, a, b;
    for (i = 2; i <= 100000; i++)
    {
        arr[i] = i;
    }
    for (i = 2; i <= sqrt(100000); i++)
    {
        if (arr[i] == 0) continue;
        for (j = 2 * i; j <= 100000; j += i)
        {
            arr[j] = 0;
        }
    } //여기까지 에 어쩌구 체
    for (i = 2; i <= 100000; i++)
    {
        if (arr[i])
        {
            if (arr[i] < 10) arr[i] = 0;
            else if (arr[i]) //뒤집었을 때 팰린드롬이거나 소수가 아니면 0으로 바꾸자
            {
                char check[7], reverse[7];
                sprintf(check, "%d", arr[i]);
                int len = strlen(check);
                for (a = 0; a < len; a++)
                {
                    reverse[a] = check[len - 1 - a];
                }
                if (strcmp(reverse, check) == 0) //팰린드롬
                {
                    arr[i] = 0;
                }
                //여기에 온거면 팰린드롬이 아니라는 의미임
                int reverseInt = atoi(reverse);
                for (a = 2; a <= sqrt(reverseInt); a++)
                {
                    if (reverseInt % a == 0)
                    {
                        arr[i] = 0;
                    }
                }
            }
        }
    }
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%d %d", &m, &n);
        int count = 0, min = 100000, max = 0, temp;
        if (m > n)
        {
            temp = m;
            m = n;
            n = temp;
        }
        for (a = m; a <= n; a++)
        {
            if (arr[a])
            {
                count++;
                if (max < arr[a]) max = arr[a];
                if (min > arr[a]) min = arr[a];
            }
        }
        if (count == 0)
        {
            printf("0 0 0\n");
        }
        else
        {
            printf("%d %d %d\n", max, min, count);
        }
    }
    return 0;
}