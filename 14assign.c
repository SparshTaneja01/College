//14. WAP to find area and volume of cuboid.

#include <stdio.h>
int main() 
{
    float l,w,h,area, volume;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter the length of the cuboid: ");
    scanf("%f", &l);
    printf("Enter the width of the cuboid: ");
    scanf("%f", &w);
    printf("Enter the height of the cuboid: ");
    scanf("%f", &h);
    area = 2 * (l * w + l * h + w * h); // surface area= length*width + legth*height + width*height
    volume = l*w*h;                     //volume = length*width*height
    printf("The area of the cuboid is:%.2f\n",area);
    printf("The volume of the cuboid is:%.2f\n",volume);
    return 0;
}
