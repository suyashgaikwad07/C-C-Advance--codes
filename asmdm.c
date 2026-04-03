#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mult,div,mod;
	printf("Enter num1 and num2 :");
	scanf("%d%d",&num1,&num2);
	add=num1+num2;
	sub=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	printf("Addition of two integers = %d\n Subtraction of two integers = %d\n Multiplication of two integers = %d\n Division of two integers = %d\n Modulus of two integers = %d\n",add,sub,mult,div,mod);
}