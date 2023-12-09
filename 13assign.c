//13. WAP to find Area and Volume of Cube.

#include<stdio.h>
int main()
{
    float side,area, volume;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter the length of a side of the cube: ");
    scanf("%f", &side);
    area = 6*side*side;           //area of cube=6*s*s
    volume = side*side*side;      //volume of cube=s*s*s
    printf("The area of the cube is: %.2f \n", area);
    printf("The volume of the cube is: %.2f \n", volume);
    return 0;
}

