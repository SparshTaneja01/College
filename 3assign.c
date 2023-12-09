//3. WAP to find area of circle.

#include <stdio.h>
int main() 
{
    double radius,area;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter the radius of the circle ");       // area of circle= pi*r*r
    scanf("%lf",&radius);
    area=3.14*radius*radius;
    printf("The Area of circle with radius %.2lf is %.2lf",radius,area);
    return 0;
}