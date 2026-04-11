#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strrev(char *str);

int main()
{
	char str1[20], str2[20];
	int ch, i, j;
	do
	{
		printf("\tMENU\n");
		printf("------------------------------\n");
		printf("1:Find Length of String\n");
		printf("2:Find Reverse of String\n");
		printf("3:Concatenate Strings\n");
		printf("4:Copy String\n");
		printf("5:Compare Strings\n");
		printf("6:Exit\n");
		printf("------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				printf("Enter String: ");
				scanf("%s", str1);
				i = strlen(str1);
				printf("Length of String : %d\n\n", i);
				break;
			case 2:
				printf("Enter String: ");
				scanf("%s", str1);
				printf("Reverse string : %s\n\n", strrev(str1));
				break;
			case 3:
				printf("Enter First String: ");
				scanf("%s", str1);
				printf("Enter Second string: ");
				scanf("%s", str2);
				strcat(str1, str2);
				printf("After Concatenation : %s\n\n", str1);
				break;
			case 4:
				printf("Enter String1: ");
				scanf("%s", str1);
				printf("Enter String2: ");
				scanf("%s", str2);
				strcpy(str2, str1);
				printf("After Copy: S1=\"%s\", S2=\"%s\"\n\n", str1, str2);
				break;
			case 5:
				printf("Enter First String: ");
				scanf("%s", str1);
				printf("Enter Second String: ");
				scanf("%s", str2);
				j = strcmp(str1, str2);
				if(j == 0)
					printf("Strings are Same\n\n");
				else
					printf("Strings are Not Same\n\n");
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Invalid Input.\n\n");
		}
	} while(ch != 6);
	return 0;
}

char *strrev(char *str)
{
	if (!str || !*str)
		return str;
	int i = strlen(str) - 1, j = 0;
	char ch;
	while (i > j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return str;
}