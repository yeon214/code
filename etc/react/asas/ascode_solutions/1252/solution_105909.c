#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc, a, b, c;
    scanf("%d", &tc);
    while (tc--)
    {
        char arr[33];
        scanf("%s", arr);
        for (a = 0; a < 25; a += 8)
        {
            int result[8] = { 0 }, count = 0, multiple = 1, sum = 0;
            for (b = a + 7; b >= a; b--)
            {
                result[count] = arr[b] - '0'; //뒤집어서 넣기
                count++;
            }
            for (b = 0; b < 8; b++)
            {
                if (result[b])
                {
                    multiple = 1;
                    for (c = 0; c < b; c++)
                    {
                        multiple *= 2;
                    }
                    sum += multiple;
                }
            }
            if (a == 24)
            {
                printf("%d\n", sum);
            }
            else
            {
                printf("%d.", sum);
            }
        }
    }
}