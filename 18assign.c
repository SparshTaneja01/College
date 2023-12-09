//18. WAP to input the positive number from the user to perform the Right shift operator.

#include <stdio.h>
int main() 
{
    int num, shift;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter a positive number: ");
    scanf("%d", &num);
    printf("Enter the number of positions to right shift: ");
    scanf("%d", &shift);
    int result = num >> shift;
    printf("Result of right shift: %d\n", result);
    return 0;
}