#include<stdio.h>
int main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if(isPerfect(num))
	{	
		printf("%d is Perfect Number\n",num);
	}
	else
	{
		printf("%d is Not Perfect Number\n",num);
	}
	return 0;
}

int isPerfect(int num)
{
	int i,sum=0,n;
	n=num;
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
			sum+=i;
	}
		return (num==sum);
}

