#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    { //m이 가로 n이 세로
        int m1, n1, m2, n2, arr1[100][100] = { 0 }, arr2[100][100] = { 0 };
        int result[100][100] = { 0 }, sum[100][100] = { 0 }, change[100][100] = { 0 };
        int check = 0;
        //arr1 첫번째 배열 arr2 두번째 배열 result 결과랑 비교하는 배열
        //sum은 배열끼리 더해서 result랑 비교할 배열 change은 arr1 변환하는 배열
        scanf("%d %d", &m1, &n1);
        for (int j = 0; j < n1; j++)
        {
            for (int k = 0; k < m1; k++)
            {
                scanf("%d", &arr1[j][k]);
            }
        }
        scanf("%d %d", &m2, &n2);
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m2; k++)
            {
                scanf("%d", &arr2[j][k]);
            }
        }
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m2; k++)
            {
                scanf("%d", &result[j][k]);
            }
        }
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m2; k++)
            {
                if (arr1[j][k] != 0 || arr2[j][k] != 0) //0도
                {
                    sum[j][k]++;
                }
            }
        }
        for (int j = 0; j < n2; j++)
        {
            if (check) break; //check 0이 아니면 배열 다르다는 의미
            for (int k = 0; k < m2; k++)
            {
                if (sum[j][k] != result[j][k])
                {
                    check++;
                    break;
                }
            }
        }
        if (check == 0)
        {
            printf("\\%d/ : True\n", i);
        }
        else
        {
            check = 0;
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < m2; k++)
                {
                    sum[j][k] = 0; //초기화
                }
            }
            for (int j = 0; j < n1; j++)
            {
                for (int k = 0; k < m1; k++)
                {
                    change[k][n1 - 1 - j] = arr1[j][k]; //90도 회전
                }
            }
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < m2; k++)
                {
                    if (change[j][k] != 0 || arr2[j][k] != 0) //90
                    {
                        sum[j][k]++;
                    }
                }
            }
            for (int j = 0; j < n2; j++)
            {
                if (check) break; //check 0이 아니면 배열 다르다는 의미
                for (int k = 0; k < m2; k++)
                {
                    if (sum[j][k] != result[j][k])
                    {
                        check++;
                        break;
                    }
                }
            }
            if (check == 0)
            {
                printf("\\%d/ : True\n", i);
            }
            else
            {
                check = 0;
                for (int j = 0; j < n2; j++)
                {
                    for (int k = 0; k < m2; k++)
                    {
                        sum[j][k] = 0; //초기화
                        change[j][k] = 0;
                    }
                }
                for (int j = 0; j < n1; j++)
                {
                    for (int k = 0; k < m1; k++)
                    {
                        change[n1 - 1 - j][m1-1-k] = arr1[j][k]; //180도 회전
                    }
                }
                for (int j = 0; j < n2; j++)
                {
                    for (int k = 0; k < m2; k++)
                    {
                        if (change[j][k] != 0 || arr2[j][k] != 0) //90
                        {
                            sum[j][k]++;
                        }
                    }
                }
                for (int j = 0; j < n2; j++)
                {
                    if (check) break; //check 0이 아니면 배열 다르다는 의미
                    for (int k = 0; k < m2; k++)
                    {
                        if (sum[j][k] != result[j][k])
                        {
                            check++;
                            break;
                        }
                    }
                }
                if (check == 0)
                {
                    printf("\\%d/ : True\n", i);
                }
                else
                {
                    check = 0;
                    for (int j = 0; j < n2; j++)
                    {
                        for (int k = 0; k < m2; k++)
                        {
                            sum[j][k] = 0; //초기화
                            change[j][k] = 0;
                        }
                    }
                    for (int j = 0; j < n1; j++)
                    {
                        for (int k = 0; k < m1; k++)
                        {
                            change[m1 - 1 - k][j] = arr1[j][k]; //270도 회전
                        }
                    }
                    for (int j = 0; j < n2; j++)
                    {
                        for (int k = 0; k < m2; k++)
                        {
                            if (change[j][k] != 0 || arr2[j][k] != 0) //90
                            {
                                sum[j][k]++;
                            }
                        }
                    }
                    for (int j = 0; j < n2; j++)
                    {
                        if (check) break; //check 0이 아니면 배열 다르다는 의미
                        for (int k = 0; k < m2; k++)
                        {
                            if (sum[j][k] != result[j][k])
                            {
                                check++;
                                break;
                            }
                        }
                    }
                    if (check == 0)
                    {
                        printf("\\%d/ : True\n", i);
                    }
                    else
                    {
                        printf("\\%d/ : False\n", i);

                    }
                }
            }
        }
    }
    return 0;
}