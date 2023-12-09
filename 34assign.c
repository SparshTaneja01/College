//34. Write a C program to find sum of first and last digit of a number.
//LEARN

#include<stdio.h>
int main()
{
    int n, first, last,sum;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10) 
    {
        n = n / 10;
    } 
    first = n;
    sum=first+last;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}