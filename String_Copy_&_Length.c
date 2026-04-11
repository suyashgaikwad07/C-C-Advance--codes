// Without Standard Function
#include <stdio.h>
int main() 
{
	char s1[100], s2[100], i;
	printf("Enter string s1: ");
	gets(s1);
	for (i = 0; s1[i] != '\0'; ++i) 
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	printf("String s2: %s", s2);
	return 0;
}

// Using Standard Function
#include<stdio.h>
#include<string.h>

void main()
{
	char s1[100], s2[100];
	printf("\nEnter string s1: ");
	gets(s1);
	strcpy(s2, s1);
	printf("\nS1=%s\nS2=%s", s1, s2);
}