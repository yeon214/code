#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int tc, a, k, sum, b, c, flag = 0;
    int num, count = 0;
    scanf("%d", &tc);
    for (a = 0; a < tc; a++)
    {
        int arr[2001] = { 0 }, result[2000] = { 0 };
        flag = 0, count = 0;
        scanf("%d", &k);
        for (b = 1; b <= k; b++)
        {
            scanf("%d", &num);
            if (arr[num] < 2)
            {
                arr[num]++;
                result[count] = num;
                count++;
            }
        }
        sort(result, result + count); //sort 할거라서 0~1999 사용
        scanf("%d", &sum);
        if (sum <= 2000)
        {
            for (c = 0; c < count; c++)
            {
                if (result[c] == result[c + 1])
                {
                    if (result[c] + result[c + 1] == sum)
                    {
                        printf("(%d, %d) ", result[c], result[c]);
                        flag++;
                    }
                }
                else
                {
                    if (arr[sum - result[c]])
                    {
                        if (result[c] < sum - result[c])
                        {
                            printf("(%d, %d) ", result[c], sum - result[c]);
                            flag++;
                        }
                    }
                }
            }
            if (flag == 0) printf("-1");
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}