#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int arra[10][10] = { 0 };
        int arrb[10][10] = { 0 };
        int n1, m1, n2, m2;
        scanf("%d %d", &n1, &m1);
        for (int j = 0; j < n1; j++)
        {
            for (int k = 0; k < m1; k++)
            {
                scanf("%d", &arra[j][k]);
            }
        }
        scanf("%d %d", &n2, &m2);
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < m2; k++)
            {
                scanf("%d", &arrb[j][k]);
            }
        }
        if ((n1 == n2) && (m1 == m2))
        {
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < m2; k++)
                {
                    printf("%d ", arra[j][k] + arrb[j][k]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}