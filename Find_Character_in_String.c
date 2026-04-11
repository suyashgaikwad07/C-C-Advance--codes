#include <stdio.h>
#include <string.h>

int main () 
{
	int len;
	char str[50];
	char ch;
	printf("\nEnter the string: ");
	gets(str);
	printf("\nEnter the character to find: ");
	scanf("%c", &ch);

	char *ret;

	ret = strrchr(str, ch);
	if(ret == NULL)
		printf("The character not found");
	else
		printf("The Character %c is found at %s", ch, ret);

	return(0);
}