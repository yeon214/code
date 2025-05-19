#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char m[100] = { 0 }, real[100] = { 0 };
        int b;
        long long total = 0;
        long long multi = 1;
        scanf("%s %d", m, &b);
        int len = strlen(m);
        for (int j = 0; j < len; j++)
        {
            if (m[j] == 'A')
            {
                m[j] = 58;
            }
            else if (m[j] == 'B')
            {
                m[j] = 59;
            }
            else if (m[j] == 'C')
            {
                m[j] = 60;
            }
            else if (m[j] == 'D')
            {
                m[j] = 61;
            }
            else if (m[j] == 'E')
            {
                m[j] = 62;
            }
            else if (m[j] == 'F')
            {
                m[j] = 63;
            }
        } //알파벳 대문자 변환 코드
        for (int j = 0; j < len; j++)
        {
            real[len- j-1] = m[j];
        } //m배열 뒤집어서 real 배열에 저장
        for (int j = 0; j < len; j++)
        {
            if (j)
            {
                multi *= b;
            }
            total += multi * (real[j]-'0');
        }
        printf("%lld\n", total);
    }
    return 0;
}