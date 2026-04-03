#include<stdio.h>
int main()
{
	int num,choice;
	for(;;)
	{
		printf("\n1.Even or Odd");
		printf("\n2.Prime");
		printf("\n3.Exit");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1 : even_odd(num);
            	 break;
			case 2 : prime(num);
            	 break;
			case 3 : break;
		}	
		if(choice==3)
			break;
	}
}

int even_odd(int n)
{
	printf("Enter any number :");
        scanf("%d",&n);
        if(n%2 == 0)
	        printf("%d is Even\n",n);
        else
                printf("%d is Odd\n",n);
}

int prime(int n)
{
	int i,count;
	printf("Enter any number :");
	scanf("%d",&n);
	for(i=2; i<=n/2; i++)
	{
		if(n % i == 0)
		{
			count++;
			break;
		}
	}
	if(count==0 && n!=1)
		printf("%d is Prime\n",n);
	else
		printf("%d is not prime\n",n);
}
