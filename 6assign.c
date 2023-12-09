//6. WAP to multiply floating point numbers.

#include <stdio.h>
int main() 
{
    float a,b,mul;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter two numbers multiply them:-");
    printf("\nEnter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    mul=a*b;
    printf("The result of %.2f multiplied by %.2f is %.2f\n",a,b,mul);
    return 0;
}