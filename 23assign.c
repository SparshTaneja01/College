//23. Write a C program to print all natural numbers in reverse (from n to 1). 

#include <stdio.h>
int main() 
{
    int n;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter starting number to print the order in reverse");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        printf("%d ",i);
    }
    return 0;
}