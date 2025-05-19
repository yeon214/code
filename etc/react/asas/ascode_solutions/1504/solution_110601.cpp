#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		char arr[20];
		scanf("%s", arr);
		int sum = 0, len = strlen(arr), a;
		for (a = 0; a < len; a++)
		{
			if (arr[a] == 'M') sum += 1000;
			else if (arr[a] == 'C' && arr[a + 1] == 'M') sum += 900, a++;
			else if (arr[a] == 'D') sum += 500;
			else if (arr[a] == 'C' && arr[a + 1] == 'D') sum += 400, a++;
			else if (arr[a] == 'C') sum += 100;
			else if (arr[a] == 'X' && arr[a + 1] == 'C') sum += 90, a++;
			else if (arr[a] == 'L') sum += 50;
			else if (arr[a] == 'X' && arr[a + 1] == 'L') sum += 40, a++;
			else if (arr[a] == 'X') sum += 10;
			else if (arr[a] == 'I' && arr[a + 1] == 'X') sum += 9, a++;
			else if (arr[a] == 'V') sum += 5;
			else if (arr[a] == 'I' && arr[a + 1] == 'V') sum += 4, a++;
			else if (arr[a] == 'I') sum += 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}