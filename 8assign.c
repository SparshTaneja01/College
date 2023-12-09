//8. WAP to SWAP two vairables number without using third variable.

#include <stdio.h>
int main() 
{
    int a,b;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter two numbers to SWAP them:-");
    printf("\nEnter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    a=a+b;             //eg- a= 10 , b= 40 then a+b=50      
    b=a-b;             //eg- b=50-40=10  
    a=a-b;             //eg- a=50-10=40  a=40,b=10 done.
    printf("After Swapping we get:-");
    printf("\nFirst number is %d",a); 
    printf("\nSecond number is %d",b); 
    return 0;
}