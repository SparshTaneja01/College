//25. Write a C program to print all natural numbers from 1 to n.

#include <stdio.h>
int main()
{
    int n;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter a number ");
    scanf("%d",&n);
    if(n>0)
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    else
    printf("Enter a valid natural no.");
    return 0;
}