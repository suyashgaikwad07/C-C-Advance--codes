#include <stdio.h>
#include <string.h>

void printReverse(char str[])
{
	int length = strlen(str);
	int i;
	for (i = length - 1; i >= 0; i--) 
	{
		if (str[i] == ' ') 
		{
			str[i] = '\0';
			printf("%s ", &(str[i]) + 1);
		}
	}
	printf("%s", str);
}

int main()
{
	char str[50];
	printf("\nEnter the string: ");
	gets(str);
	printReverse(str);
	return 0;
}