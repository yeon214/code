#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        float d, change; //리 0.393
        int check = 0;
        scanf("%f", &d);
        if (fabs(d - 1.965) < 0.000001) check++;
        else
        {
            change = d-0.393; //4+1(리)
            if (fabs(change - 1.000 * 4) < 0.000001) check++;
            else if (fabs(change - 0.001 * 4) < 0.000001) check++;
            else if (fabs(change - 1.609 * 4) < 0.000001) check++;
            else if (fabs(change - 0.002 * 4) < 0.000001) check++;
            else if (fabs(change - 0.109 * 4) < 0.000001) check++;
            else if (fabs(change - 1.852 * 4) < 0.000001) check++;

            change = d - (0.393 * 2); //3+2
            if (fabs(change - 1.000 * 3) < 0.000001) check++;
            else if (fabs(change - 0.001 * 3) < 0.000001) check++;
            else if (fabs(change - 1.609 * 3) < 0.000001) check++;
            else if (fabs(change - 0.002 * 3) < 0.000001) check++;
            else if (fabs(change - 0.109 * 3) < 0.000001) check++;
            else if (fabs(change - 1.852 * 3) < 0.000001) check++;

            change = d - (0.393 * 3); //2+3
            if (fabs(change - 1.000 * 2) < 0.000001) check++;
            else if (fabs(change - 0.001 * 2) < 0.000001) check++;
            else if (fabs(change - 1.609 * 2) < 0.000001) check++;
            else if (fabs(change - 0.002 * 2) < 0.000001) check++;
            else if (fabs(change - 0.109 * 2) < 0.000001) check++;
            else if (fabs(change - 1.852 * 2) < 0.000001) check++;

            change = d - (0.393 * 4); //1+4
            if (fabs(change - 1.000) < 0.000001) check++;
            else if (fabs(change - 0.001) < 0.000001) check++;
            else if (fabs(change - 1.609) < 0.000001) check++;
            else if (fabs(change - 0.002) < 0.000001) check++;
            else if (fabs(change - 0.109) < 0.000001) check++;
            else if (fabs(change - 1.852) < 0.000001) check++;
        }
        if (check) printf("duck\n");
        else printf("goose\n");
    }
    return 0;
}