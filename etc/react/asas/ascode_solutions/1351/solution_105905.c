#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc, a, b, c;
    scanf("%d", &tc);
    while (tc--)
    {
        int arr[9][9], no = 0, check[9] = { 0 };
        for (a = 0; a < 9; a++)
        {
            for (b = 0; b < 9; b++)
            {
                scanf("%d", &arr[a][b]);
            }
        }
        for (a = 0; a < 9; a++)
        {
            int check[9] = { 0 }; //가로줄 판단 // 배열 이렇게 하면 초기화 안됐었던 것 같은데
            for (b = 0; b < 9; b++) //배열 초기화 안되면 반복문으로 0 넣어야함
            {
                check[arr[a][b]-1]++;
            }
            for (b = 0; b < 9; b++)
            {
                if (check[b] != 1)
                {
                    no++;
                    break;
                }
            }
        }
        for (a = 0; a < 9; a++)
        {
            int check[9] = { 0 }; //세로줄 판단
            for (b = 0; b < 9; b++)
            {
                check[arr[b][a] - 1]++;
            }
            for (b = 0; b < 9; b++)
            {
                if (check[b] != 1)
                {
                    no++;
                    break;
                }
            }
        }
        for (a = 0; a < 9; a+=3) //왼쪽 라인 3개 이거 안되면 반복문 9개 짜야함
        {
            int check[9] = { 0 };
            for (b = a; b < a+3; b++)
            {
                for (c = 0; c < 3; c++)
                {
                    check[arr[b][c] - 1]++;
                }
            }
            for (b = 0; b < 9; b++)
            {
                if (check[b] != 1)
                {
                    no++;
                    break;
                }
            }
        }
        for (a = 0; a < 9; a += 3) //중간 라인
        {
            int check[9] = { 0 };
            for (b = a; b < a + 3; b++)
            {
                for (c = 3; c < 6; c++)
                {
                    check[arr[b][c] - 1]++;
                }
            }
            for (b = 0; b < 9; b++)
            {
                if (check[b] != 1)
                {
                    no++;
                    break;
                }
            }
        }
        for (a = 0; a < 9; a += 3) //오른쪽 라인
        {
            int check[9] = { 0 };
            for (b = a; b < a + 3; b++)
            {
                for (c = 6; c < 9; c++)
                {
                    check[arr[b][c] - 1]++;
                }
            }
            for (b = 0; b < 9; b++)
            {
                if (check[b] != 1)
                {
                    no++;
                    break;
                }
            }
        }
        if (no == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}