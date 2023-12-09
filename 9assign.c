//9. WAP to SWAP three vairable numbers without using third variables.

#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter three numbers to SWAP them:-");
    printf("\nEnter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    printf("Enter the third number ");
    scanf("%d",&c);
    a=a+b+c;
    b=a-(b+c);             //b=a
    c=a-(b+c);             //c=b
    a=a-(b+c);             //a=c
    printf("After Swapping we get:-");
    printf("\nFirst number is %d",a); 
    printf("\nSecond number is %d",b); 
    printf("\nThird number is %d",c); 
    return 0;
}