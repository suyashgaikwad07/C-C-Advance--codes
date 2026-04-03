#include<stdio.h>
#define max_size 100
int main()
{
	int a[max_size],i,max,size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	printf("Enter the elements of the matix :");
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}

	max=a[0];
	for(i=0; i<size; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("Maximum Element = %d\n",max);
	return 0;
}
