#include<stdio.h>

int print_chars(char c,int n);

int main()
{
	int n;
	char ch;

	printf("Enter the character :");
	scanf("%c",&ch);
	printf("Enter how many characters to display :");
	scanf("%d",&n);
	print_chars(ch,n);
}

int print_chars(char c,int n)
{
	int i;
	for(i=1;i<=n;i++,c++)
	{
		printf("%c\t",c);
	}
}
