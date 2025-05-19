#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, a, b;
    scanf("%d", &tc);
    while (tc--)
    {
        char numM[110] = { 0 }, numN[110] = { 0 }, result[110];
        scanf("%s %s", numM, numN);
        int lenM = strlen(numM), lenN = strlen(numN), minus = 0, count = 0, longLen, index=-1;
        if (lenM < lenN)
        {
            count = 0, longLen = lenN;
            for (a = lenM - 1; a >= 0; a--)
            {
                numM[lenN - 1 - count] = numM[a];
                count++;
            }
            for (a = 0; a < lenN - lenM; a++)
            {
                numM[a] = '0';
            }
        }
        else if (lenM > lenN)
        {
            count = 0, longLen = lenM;
            for (a = lenN - 1; a >= 0; a--)
            {
                numN[lenM - 1 - count] = numN[a];
                count++;
            }
            for (a = 0; a < lenM - lenN; a++)
            {
                numN[a] = '0';
            }
        }
        else longLen = lenM;

        if (strcmp(numM, numN) < 0) //배열 재배열 한 다음에 판단해야함
        {
            minus++;
            for (a = 0; a < longLen; a++)
            {
                result[a] = '0';
            }
            for (a = longLen - 1; a >= 0; a--)
            {
                if (numN[a] - numM[a] >= 0)
                {
                    result[a] += numN[a] - numM[a];
                }
                else
                {
                    numN[a - 1]--;
                    result[a] += numN[a] - numM[a]+10;
                }
            }
        }
        else
        {
            for (a = 0; a < longLen; a++)
            {
                result[a] = '0';
            }
            for (a = longLen - 1; a >= 0; a--)
            {
                if (numM[a] - numN[a] >= 0)
                {
                    result[a] += numM[a] - numN[a];
                }
                else
                {
                    numM[a - 1]--;
                    result[a] += numM[a] - numN[a] + 10;
                }
            }
        }
        for (a = 0; a < longLen; a++)
        {
            if (result[a] >= '1')
            {
                index = a;
                break;
            }
        }
        if (index == -1)
        {
            printf("0");
        }
        else
        {
            if (minus) printf("-");
            for (a = index; a < longLen; a++)
            {
                printf("%c", result[a]);
            }
        }
        printf("\n");
    }
    return 0;
}