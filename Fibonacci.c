#include<stdio.h>
void main()
{
    int n, first=0, seond=1,next,i;
    printf("Enter the number of term:");
    scanf("%d",&n):
    printf("First %d term of Fibonacci series are :\n",n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        next=i;
    else
       {
         next=first+second;
         first=second;
         second=next;
       }
      printf("%d\t",next);
    }
}
