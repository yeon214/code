#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char arr[1001] = { 0 };
        int ch[62] = { 0 };//0~9 0은 48, 10~35 A~Z 65, 36~61 a~z a 97
        int k, max, index;
        scanf("%s %d", arr, &k);
        int len = strlen(arr);
        for (int j = 0; j < len; j++)
        {
            if (arr[j] >= '0' && arr[j] <= '9')
            {
                ch[arr[j] - '0']++;
            }
            else if (arr[j] >= 'A' && arr[j] <= 'Z')
            {
                ch[arr[j] - 55]++;
            }
            else
            {
                ch[arr[j] - 61]++;
            }
        }
        for (int j = 0; j < k; j++)
        {
            max = ch[0];
            index = 0;
            for (int p = 0; p < 62; p++)
            {
                if (max < ch[p])
                {
                    max = ch[p];
                    index = p;
                }
            }
            if (index >= 0 && index <= 9)
            {
                printf("%c:%d\n", index + 48, max);
            }
            else if (index >= 10 && index <= 35)
            {
                printf("%c:%d\n", index + 55, max);
            }
            else
            {
                printf("%c:%d\n", index + 61, max);
            }
            ch[index] = 0;
        }
        printf("---\n");
    }
    return 0;
}