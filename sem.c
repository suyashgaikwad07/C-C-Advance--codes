#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],add[20][20],row,col,i,j;
	printf("Enter how many rows and columns :");
	scanf("%d%d",&row,&col);
	printf("Enter elements of the first matrix :");
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter elements of the second matrix :");
        for(i=1; i<=row; i++)
        {
                for(j=1; j<=col; j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

	for(i=1; i<=row; i++)
        {
                for(j=1; j<=col; j++)
                {
                        add[i][j]=a[i][j]+b[i][j];
                }
        }

	printf("Addition of two matrix :");
        for(i=1; i<=row; i++)
        {
		printf("\n");
                for(j=1; j<=col; j++)
                {
                        printf("\t%d",add[i][j]);
                }
        }
}
