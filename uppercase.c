#include<stdio.h>
main()
{
	char ch;	
	printf("Enter a character :");
	scanf("%c",&ch);
	if(isupper(ch))
	{
		printf("Character is Uppercase...\n");
	}
	else
	{
		printf("Charcater is Lowercase...\n");
	}
}