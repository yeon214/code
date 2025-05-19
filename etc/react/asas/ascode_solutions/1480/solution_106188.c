#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    char arr[21];
    scanf("%s", arr);
    int lenArr = strlen(arr), a, count = 0;
    for (a = 0; a < lenArr; a++)
    {
        if (arr[a] == 'H') printf("Hello, world!\n");
        else if (arr[a] == 'Q') printf("%s\n", arr);
        else if (arr[a] == '9')
        {
            printf("%d x 1 = %d\n", count, count * 1);
            printf("%d x 2 = %d\n", count, count * 2);
            printf("%d x 3 = %d\n", count, count * 3);
            printf("%d x 4 = %d\n", count, count * 4);
            printf("%d x 5 = %d\n", count, count * 5);
            printf("%d x 6 = %d\n", count, count * 6);
            printf("%d x 7 = %d\n", count, count * 7);
            printf("%d x 8 = %d\n", count, count * 8);
            printf("%d x 9 = %d\n", count, count * 9);
        }
        else if (arr[a] == '+') count++;
    }
    return 0;
}