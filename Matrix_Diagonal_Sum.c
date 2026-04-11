#include<stdlib.h>
#include<stdio.h>

int main()
{
	int m, n, i, j, sum=0;
	printf("Enter no. of rows and columns: ");
	scanf("%d%d", &m, &n);

	int **a;

	a = (int **) malloc(m * sizeof(int *));
	for(i=0; i<m; i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
	}

	printf("Enter matrix elements: ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Diagonal elements are: \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				printf("%d ", a[i][j]);
				sum = sum + a[i][j];
			}
		}
		printf("\n");
	}
	printf("Sum=%d", sum);

	for(i=0; i<m; i++)
		free(a[i]);
	free(a);
	return 0;
}