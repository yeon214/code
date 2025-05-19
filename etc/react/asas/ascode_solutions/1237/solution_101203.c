#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int i, j, count = 0, max = 0;
    for (; scanf("%d %d", &i, &j) != EOF;)
    {
        int numI = i, numj = j;
        if (i > j)
        {
            int temp = i; //무조건 j가 더 크거나 같게
            i = j;
            j = temp;
        }
        for (int a = i; a <= j; a++)
        {
            count = 0;
            int num = a;
            for (;;count++)
            {
                if (num == 1) break;
                if (num % 2 == 1)
                {
                    num = 3 * num + 1;
                }
                else
                {
                    num /= 2;
                }
            }
            if (a == i)
            {
                max = count;
            }
            else
            {
                if (max < count) max = count;
            }
        }
        printf("%d %d %d\n", numI, numj, max+1);
    }
    return 0;
}