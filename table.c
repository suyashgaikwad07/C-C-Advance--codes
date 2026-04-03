#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter how many multiplication tables want to display :");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d\t",(i*j));
		}
		printf("\n");
	}
	return 0;
}
