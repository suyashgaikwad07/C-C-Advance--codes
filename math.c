#include<stdio.h>
int main () {
    int num1 =5 , num2=25;
    printf("Enter value of num1 & num2");
    scanf("%d%d", &num1, &num2);
    int add, sub, mult, div, mod;
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    printf("Addition is :%d\n", add);
     printf("subtraction is :%d\n", sub);
      printf("multiplication is :%d\n", mult);
       printf("division is :%d\n", div);
        printf("modules is :%d\n", mod);
        return 0;
}