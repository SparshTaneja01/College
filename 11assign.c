//11. WAP to find area of square

#include <stdio.h>
int main() 
{ 
    float side,area;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter the side of the square:");
    scanf("%f", &side);
    area = side*side;    //area of square=side*side
    printf("The area of Square is:%.2f\n", area);                         
    return 0;
}