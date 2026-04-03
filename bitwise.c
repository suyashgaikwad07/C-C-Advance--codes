#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the two number");
    scanf("%d%d", &a, &b);
    printf("The bitwise AND = %d\n", a&b);
    printf("The bitwise OR = %d\n", a|b);
    printf("The bitwise XOR = %d\n", a^b);
    printf("The ones complement of a = %d\n", ~a);
    printf("The ones complement of b = %d\n", ~b);
    printf("a << b = %d\n", a<<b);
     printf("a >> b = %d\n", a>>b);
     printf("The modulus = %d\n", a%b);
     return 0;

}