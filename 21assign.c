//21. WAP for an integer number and to check whether it is divisible by 9 or 7 using OR logical operator.

#include <stdio.h>
int main() 
{
    int n;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter an integer: ");
    scanf("%d", &n);
    if (n%9 == 0 || n%7 == 0) {
        printf("%d is divisible by 9 or 7.\n", n);
    } 
    else 
        printf("%d is not divisible by 9 or 7.\n", n);
    return 0;
}
