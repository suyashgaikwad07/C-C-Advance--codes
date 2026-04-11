#include <stdio.h>
#include <string.h>

char *strrev(char *str);

void main()
{
	char str[20];
	printf("\nEnter the string\n");
	gets(str);
	printf("\nThe reverse is %s", strrev(str));
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