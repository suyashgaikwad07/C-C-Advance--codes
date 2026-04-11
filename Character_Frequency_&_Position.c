#include <stdio.h>
int main() 
{
	char str[1000], ch;
	int count = 0, i;

	printf("Enter a string: ");
	gets(str);

	printf("Enter a character to find its frequency: ");
	scanf("%c", &ch);

	for (i = 0; str[i] != '\0'; ++i) 
	{
		if (ch == str[i])
		{
			++count;
			printf("\nCharacter %c found at position %d", ch, i);
		}
	}
	printf("\nFrequency of %c = %d", ch, count);
	return 0;
}