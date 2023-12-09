//29. Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>
int main()
{
    int n,a=0;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter a number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=a+i;
        }
    }
    if(n>0)
    {
        printf("Sum of all even numbers between 1 to %d is %d",n,a);
    }
    else
    printf("Enter a valid number (greater than 0)");
    return 0;
}