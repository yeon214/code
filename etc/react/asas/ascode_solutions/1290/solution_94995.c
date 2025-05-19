#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[10][10] = { 0 };
    int b[10][10] = { 0 };
    int n, m, x, y;
    for (;;) 
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) 
        {
            break;
        }
        else 
        {
            for (int i = 0; i < n; i++) 
            {
                for (int k = 0; k < m; k++) 
                {
                    scanf("%d", &a[i][k]);

                }
            }
            scanf("%d %d", &x, &y);
            for (int i = 0; i < x; i++) 
            {
                for (int k = 0; k < y; k++) 
                {
                    scanf("%d", &b[i][k]);
                }
            }
            int sum = 0;
            int h = 0;
            if (n == x && m == y) 
            {
                for (int i = 0; i < x; i++) 
                {
                    for (int k = 0; k < y; k++) 
                    {
                        sum = a[i][k] - b[i][k];
                        if (sum != 0) 
                        {
                            h++;
                        }
                    }
                }
                if (h == 0) 
                {
                    printf("Zero Matrix\n");
                }
                else
                {
                    for (int i = 0; i < x; i++)
                    {
                        for (int k = 0; k < y; k++)
                        {
                            sum = a[i][k] - b[i][k];
                            printf("%d ", sum);
                        }
                        printf("\n");
                    }
                }
            }

            else 
            {
                printf("Impossible\n");
            }
        }
    }
}
