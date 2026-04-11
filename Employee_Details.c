#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[30];
	int id;
	double salary;
} Employee;

int main()
{
	int n=2, i;

	Employee employees[n];

	printf("Enter %d Employee Details\n\n", n);
	for(i=0; i<n; i++)
	{
		printf("Employee %d:-\n", i+1);
		printf("Name: ");
		scanf("%[^\n]s", employees[i].name);
		printf("Id: ");
		scanf("%d", &employees[i].id);
		printf("Salary: ");
		scanf("%lf", &employees[i].salary);
		char ch = getchar();
		printf("\n");
	}

	printf("---------- All Employees ----------\n");
	for(i=0; i<n; i++)
	{
		printf("Name   : %s\n", employees[i].name);
		printf("Id     : %d\n", employees[i].id);
		printf("Salary : %.2lf\n\n", employees[i].salary);
	}
	return 0;
}