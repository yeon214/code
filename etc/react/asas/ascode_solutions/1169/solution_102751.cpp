#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
        {
            int arr[6]={0};
            int sum = 0, even = 0, oh = 0, real = 0;
            for (int j = 0; j < 6; j++)
                {
                    scanf("%d", &arr[j]);
                    sum += arr[j];
                    if (arr[j]%2==0)
                    {
                        even++;
                    }
                }
            int n;
            scanf("%d", &n);
            for (int j = 0; j < 6; j++)
                {
                    if (arr[j]==n)
                    {
                        oh++;
                    }
                }
            if ((sum>=91)&&(sum<=180))
            {
                real++;
            }
            if ((even>=2)&&(even<=4))
            {
                real++;
            }
            if (oh==1)
            {
                real++;
            }
            if(real==3)
            {
                printf("BEST\n");
            }
            else if (real==2)
            {
                printf("GOOD\n");
            }
            else if (real==1)
            {
                printf("NORMAL\n");
            }
            else
            {
                printf("BAD\n");
            }
        }
    return 0;
}