//31. Write a C program to print multiplication table of any number.

#include<stdio.h>
int main()
{
    int n;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter a number to print its multiplication table");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%dX%d= %d\n",n,i,i*n);
    }
    return 0;
}