#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character :");
	ch=getchar();
	printf("The ASCII value of a character is = %d\n",ch);
	printf("Next Integer = %d\n",ch+1);
	printf("Previous Integer = %d\n",ch-1);
}