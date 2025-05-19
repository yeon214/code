#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int arr[6] = { 0 }, rule1=0, rule2=0, rule3=0; //1이 1~45, 2 중복, 3 합
    int check1 = 0, check2= 0, sum = 0, temp = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] >= 1 && arr[i] <= 45)
        {
            check1++;
        }
        else
        {
            break;
        }
    }
    if (check1 == 6)
    {
        rule1++;
    }
    for (int i = 0; i < 5; i++)
    {
        if (check2)
        {
            break;
        }
        for (int j = 1+i; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                check2++; //check2가 0이 아니라면 중복이 있다는 의미
                break;
            }
        }
    }
    if (check2 == 0)
    {
        rule2++;
    }
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    if (sum >= 81 && sum <= 180)
    {
        rule3++;
    }
    if (rule1 == 1 && rule2 == 1 && rule3 == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (rule1 == 1 && rule2 == 1)
    {
        printf("YES");
    }
    else
    {
        printf("BAD!");
    }
    return 0;
}