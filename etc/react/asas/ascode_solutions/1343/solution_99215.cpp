#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char m[101] = { 0 }, real[101] = { 0 };
        scanf("%s", m);
        int lenM = strlen(m), a = 0, b = lenM / 2; //a even b odd
        if (lenM % 2 == 1)
        {
            b++;
        }
        for (int j = 0; j < lenM; j++)
        {
            if (j % 2 == 0)
            {
                real[a] = m[j];
                a++;
            }
            else
            {
                real[b] = m[j];
                b++;
            }
        }
        for (int j = 0; j < lenM; j++)
        {
            printf("%c", real[j]);
        }
        printf("\n");
    }
    return 0;
}