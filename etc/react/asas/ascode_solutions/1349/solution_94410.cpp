#include<stdio.h>

char str[] = "ABCDGKMPSW";

int main() {
	int test;
	scanf("%d", &test);

	while (test--) 
	{
		int num;
		scanf("%d", &num);
		if (num % 2) 
		{
			for (int i = 0; i < num / 2.0; i++) 
			{
				for (int j = 0; j < num / 2.0; j++) 
				{
					if (i < j) printf("%c", str[num / 2 - i]);
					else printf("%c", str[num / 2 - j]);
				}
				for (int j = num / 2 - 1; j >= 0; j--) 
				{
					if (i < j) printf("%c", str[num / 2 - i]);
					else printf("%c", str[num / 2 - j]);
				}
				printf("\n");
			}
			for (int i = num / 2 - 1; i >= 0; i--) 
			{
				for (int j = 0; j < num / 2.0; j++) 
				{
					if (i < j) printf("%c", str[num / 2 - i]);
					else printf("%c", str[num / 2 - j]);
				}
				for (int j = num / 2 - 1; j >= 0; j--) 
				{
					if (i < j) printf("%c", str[num / 2 - i]);
					else printf("%c", str[num / 2 - j]);
				}
				printf("\n");
			}
			printf("\n");
		}
		else {
			for (int i = 0; i < num / 2.0; i++) 
			{
				for (int j = 0; j < num / 2.0; j++) 
				{
					if (i < j) printf("%c", str[num / 2 - i - 1]);
					else printf("%c", str[num / 2 - j - 1]);
				}
				for (int j = num / 2 - 1; j >= 0; j--) 
				{
					if (i < j) printf("%c", str[num / 2 - i - 1]);
					else printf("%c", str[num / 2 - j - 1]);
				}
				printf("\n");
			}
			for (int i = num / 2 - 1; i >= 0; i--) 
			{
				for (int j = 0; j < num / 2.0; j++) 
				{
					if (i < j) printf("%c", str[num / 2 - i - 1]);
					else printf("%c", str[num / 2 - j - 1]);
				}
				for (int j = num / 2 - 1; j >= 0; j--) 
				{
					if (i < j) printf("%c", str[num / 2 - i - 1]);
					else printf("%c", str[num / 2 - j - 1]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}

	return 0;
}
