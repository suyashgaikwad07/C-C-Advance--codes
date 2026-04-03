#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mult[10][10],m,n,p,q,c,d,k,sum=0;
	printf("Enter order of first matrix :");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of first matrix :");
	for(c=0; c<m; c++)
	{
		for(d=0; d<n; d++)
		{
			scanf("%d",&a[c][d]);
		}
	}

	printf("Enter order of second matrix :");
	scanf("%d%d",&p,&q);
	if(n!=p)
		printf("\nMatrices with entered orders can't be multiplied with each other.");
	else
	{
		printf("Enter the elements of second matrix :");
		for(c=0; c<p; c++)
		{
			for(d=0; d<q; d++)
			{
				scanf("%d",&b[c][d]);
			}
		}
		
		for(c=0; c<m; c++)
		{
			for(d=0; d<q; d++)
			{
				for(k=0; k<p; k++)
				{
					sum=sum+a[c][k]*b[k][d];
				}
				mult[c][d]=sum;
				sum=0;
			}
		}
	}

	printf("\nMultiplication of matrices :\n");
	for(c=0; c<m; c++)
	{
		for(d=0; d<q; d++)
		{
			printf("%d\t",mult[c][d]);
		}
		printf("\n");
	}

}