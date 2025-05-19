#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[1001] = { 0 };
        int k, max, index = 0;
        int ch[62] = { 0 };//0~9 0은 48, 10~35 A~Z 65, 36~61 a~z a 97
        scanf("%s %d", s, &k);
        int len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
            {
                ch[s[j] - 48]++;
            }
            else if (s[j] >= 'A' && s[j] <= 'Z')
            {
                ch[s[j] - 55]++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                ch[s[j] - 61]++;
            }
        }
        for (int j = 0; j < k; j++)
        {
            max = ch[0], index = 0;
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