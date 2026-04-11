#include<stdio.h>
struct item
{
	int code;
	char name[10];
	int price;
	int qty;
	float cost;
} s[3];

void input(struct item up[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ITEM CODE: ", i+1);
		scanf("%d", &up[i].code);
		printf("ITEM NAME: ");
		scanf("%s", up[i].name);
		printf("ITEM PRICE: ");
		scanf("%d", &up[i].price);
		printf("ITEM QTY: ");
		scanf("%d", &up[i].qty);
	}
}

void output(struct item up[], int n)
{
	int i;
	float tcost = 0.0;
	for(i=0; i<n; i++)
	{
		printf("\n%d ITEM CODE: %d", i+1, up[i].code);
		printf("\nITEM NAME: %s", up[i].name);
		printf("\nITEM PRICE: %d", up[i].price);
		printf("\nITEM QTY: %d", up[i].qty);
		up[i].cost = up[i].price * up[i].qty;
		tcost += up[i].cost;
		printf("\nITEM COST: %.2f\n", up[i].cost);
	}
	printf("\nTOTAL BILL: %.2f", tcost);
}

void main()
{
	input(s, 3);
	output(s, 3);
}