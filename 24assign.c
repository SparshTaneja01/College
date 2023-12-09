//24. Write a C program to print all alphabets from a to z.

#include <stdio.h>
int main()
{
    int n;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter 1 to print lowercase alphabets \nEnter 2 to print lowercase alphabets\n");
    scanf("%d",&n);
    if(n==1)
    for(int a=97;a<=122;a++)
    {
        printf("%c ",a);
    }
    else if(n==2)
    for(int A=65;A<=90;A++)
    {
        printf("%c ",A);
    }
    else 
    printf("WRONG NUMBER ENTERED");
    return 0;
}