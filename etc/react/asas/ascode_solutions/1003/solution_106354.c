#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc,a, r, b,c;
    scanf("%d", &tc);
    for (a = 1; a <= tc; a++)
    {
        char arr[32][32];
        int indexW, indexH, english[26] = { 0 }, count = 0, w, h;
        scanf("%d %d %d", &w, &h, &r); //w가 가로 h가 세로
        for (b = 0; b < h; b++)
        {
            for (c = 0; c < w; c++)
            {
                scanf(" %c", &arr[b][c]);
                if (arr[b][c] == '@') indexH = b, indexW = c;
                if (arr[b][c] >= 'A' && arr[b][c] <= 'Z') english[arr[b][c] - 'A']++;
            }
        }
        for (b = indexH - r; b <= indexH + r; b++)
        {
            for (c = indexW - r; c <= indexW + r; c++)
            {
                if ((b >= 0 && b < h) && (c >= 0 && c < w)) //인덱스 안벗어나게
                {
                    if (arr[b][c] >= 'A' && arr[b][c] <= 'Z') count++;
                }
            }
        }
        for (b = 0; b < 26; b++)
        {
            if (english[b])
            {
                printf("%c %d\n", b + 'A', english[b]);
            }
        }
        if (count) printf("Monsters Nearby %d\n", count);
        printf("\n");
    }
    return 0;
}