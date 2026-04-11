#include<stdio.h>
int main()
{
	int num, rem;
	int *pnum;
	pnum = &num;

	printf("Enter number: ");
	scanf("%d", pnum);

	rem = *pnum % 2;

	if(rem == 0)
		printf("%d is even.\n", *pnum);
	else
		printf("%d is odd.\n", *pnum);

	return 0;
}