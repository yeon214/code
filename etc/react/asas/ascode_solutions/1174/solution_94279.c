#include<stdio.h>
int main(void)
{
    int arr[19][19] = { 0 };
    int Che10 = 0, Che11 = 0, Che12 = 0, Che13 = 0;
    int Che20 = 0, Che21 = 0, Che22 = 0, Che23 = 0;
    int t, T, i, j, n;
    int Wi1 = 0, Wi2 = 0;
    scanf("%d", &T);
    for (t = 0; t < T; t++)
    {
        Wi1 = 0, Wi2 = 0;
        for (i = 0; i < 19; i++)
        {
            for (j = 0; j < 19; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (i = 0; i < 19; i++)
        {
            for (j = 0; j < 19; j++)
            {
                Che10 = 0, Che11 = 0, Che12 = 0, Che13 = 0;
                Che20 = 0, Che21 = 0, Che22 = 0, Che23 = 0;
                if (arr[i][j] == 1)
                {
                    for (n = 0; n < 5; n++)
                    {

                        if (arr[i + n][j] == 1)
                        {
                            Che10++;
                        }

                        if (arr[i][j + n] == 1)
                        {
                            Che11++;
                        }

                        if (arr[i + n][j + n] == 1)
                        {
                            Che12++;
                        }

                        if (arr[i - n][j + n] == 1)
                        {
                            Che13++;
                        }
                    }
                }
                if (Che10 == 5 || Che11 == 5 || Che12 == 5 || Che13 == 5)
                    Wi1++;
                if (arr[i][j] == 2)
                {
                    for (n = 0; n < 5; n++)
                    {

                        if (arr[i + n][j] == 2)
                        {
                            Che20++;
                        }

                        if (arr[i][j + n] == 2)
                        {
                            Che21++;
                        }

                        if (arr[i + n][j + n] == 2)
                        {
                            Che22++;
                        }

                        if (arr[i - n][j + n] == 2)
                        {
                            Che23++;
                        }
                    }
                }
                if (Che20 == 5 || Che21 == 5 || Che22 == 5 || Che23 == 5)
                    Wi2++;
            }
        }
        if (Wi1 > 0)
        {
            printf("Black wins! \n");
        }
        else if (Wi2 > 0)
        {
            printf("White wins! \n");
        }
        else
        {
            printf("Yet \n");
        }
    }
}
