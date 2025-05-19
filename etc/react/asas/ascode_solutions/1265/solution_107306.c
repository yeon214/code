#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, a, x;
    scanf("%d", &tc);
    for (x = 1; x <= tc; x++)
    {
        char arr1[82], arr2[82], result[82];
        scanf("%s %s", arr1, arr2);
        int lenArr1 = strlen(arr1), lenArr2 = strlen(arr2), longLen, temp, flag = 0, index = -1;
        for (a = 0; a < lenArr1 / 2; a++)
        {
            temp = arr1[a];
            arr1[a] = arr1[lenArr1 - 1 - a];
            arr1[lenArr1 - 1 - a] = temp;
        }
        for (a = 0; a < lenArr2 / 2; a++)
        {
            temp = arr2[a];
            arr2[a] = arr2[lenArr2 - 1 - a];
            arr2[lenArr2 - 1 - a] = temp;
        }
        if (lenArr1 > lenArr2)
        {
            longLen = lenArr1;
            for (a = lenArr2; a < longLen; a++)
            {
                arr2[a] = '0';
            }
        }
        else if (lenArr1 < lenArr2)
        {
            longLen = lenArr2;
            for (a = lenArr1; a < longLen; a++)
            {
                arr1[a] = '0';
            }
        }
        else longLen = lenArr2; //ㅇㅋ
        for (a = 0; a < longLen; a++)
        {
            result[a] = '0';
        }
        for (a = 0; a < longLen; a++)
        {
            if (result[a] + arr1[a] + arr2[a] == '0' * 3)
            {
                result[a] = '0';
            }
            else if (result[a] + arr1[a] + arr2[a] == '0' * 2 + '1' * 1)
            {
                result[a] = '1';
            }
            else if (result[a] + arr1[a] + arr2[a] == '0' * 1 + '1' * 2)
            {
                if (a == longLen - 1) flag++;
                result[a] = '0', result[a + 1] = '1';
            }
            else if (result[a] + arr1[a] + arr2[a] == '1' * 3)
            {
                if (a == longLen - 1) flag++;
                result[a] = '1', result[a + 1] = '1';
            }
        }
        for (a = 0; a < (longLen+flag)/2; a++)
        {
            temp = result[a];
            result[a] = result[longLen + flag - 1 - a];
            result[longLen + flag - 1 - a] = temp;
        } //ㅇㅋ
        for (a = 0; a < longLen + flag; a++)
        {
            if (result[a] == '1')
            {
                index = a;
                break;
            }
        }
        if (index == -1) printf("%d 0\n", x);
        else
        {
            printf("%d ", x);
            for (a = index; a < longLen + flag; a++)
            {
                printf("%c", result[a]);
            }
            printf("\n");
        }
    }
    return 0;
}