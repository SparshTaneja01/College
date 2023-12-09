//7. WAP to SWAP two variables number by using third variable.

#include <stdio.h>
int main() 
{
    int a,b,temp;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter two numbers to SWAP them:-");
    printf("\nEnter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    temp=a;                               
    a=b;
    b=temp;
    printf("After Swapping we get:-");
    printf("\nFirst number is %d",a); 
    printf("\nSecond number is %d",b); 
    return 0;
}
