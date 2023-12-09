//17. WAP to input the positive number from the user to perform the Left shift operator.

#include <stdio.h>
int main() 
{
    int num, shift;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter a positive number: ");
    scanf("%d", &num);
    printf("Enter the number of positions to left shift: ");
    scanf("%d", &shift);
    int result = num << shift;
    printf("Result of left shift: %d\n", result);
    return 0;
}

