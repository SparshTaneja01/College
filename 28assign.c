//28. Write a C program to find sum of all natural numbers between 1 to n

#include<stdio.h>
int main()
{
    int n,a=0;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=a+i;
    }
    if(n>0)
    printf("%d",a);
    else
    printf("Enter a valid number (greater than 0)");
    return 0;
}