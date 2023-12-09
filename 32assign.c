//32. Write a C program to count number of digits in a number.
//LEARN

#include<stdio.h>
int main()
{
    int n,count=0;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}