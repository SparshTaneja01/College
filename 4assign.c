//4. WAP to divide two numbers.

#include <stdio.h>
int main() 
{
    float a,b,div;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter two numbers to divide them:-\n");
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    div=a/b;
    printf("The result of %.2f divided by %.2f is %.2f\n",a,b,div);
    return 0;
}