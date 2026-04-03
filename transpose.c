#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],row,col,i,j;
	printf("Enter how many rows and columns :");
	scanf("%d%d",&row,&col);
	printf("Enter elements of the array :");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEntered matrix is :\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			transpose[i][j]=a[j][i];
		}
	}

	printf("\nTranspose of a matrix is :\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}