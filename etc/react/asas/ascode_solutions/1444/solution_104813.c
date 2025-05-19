#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    int tc, a, b;
    scanf("%d", &tc);
    for (a = 0; a < tc; a++)
    {
        char p1[101] = { 0 }, p2[101] = { 0 }; //문자 갯수 같겠지..?
        char temp[101] = { 0 };
        int n1, n2;
        scanf("%s %s", p1, p2);
        scanf("%d %d", &n1, &n2);
        int len = strlen(p1); //하나씩 찍어내면 런타임 가능성 있음
        strcpy(temp, p2);
        for (b = n1; b < n2; b++)
        {
            p2[b] = p1[b]; //p2가 c2로 변경됨
        }
        for (b = n1; b < n2; b++)
        {
            p1[b] = temp[b]; //p1이 c1으로 변경
        }
        printf("%s %s\n", p1, p2);
    }
    return 0;
}