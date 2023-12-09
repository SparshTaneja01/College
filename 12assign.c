//12. WAP to find area of right angle triangle, isosceles triangle, any triangle with 3 sides.

#include <stdio.h>
#include <Math.h>
int main()
{
    int n;
    double s1,s2,s3,b,h,area,temp;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nTo find area of Right angle triangle, ENTER 1\nTo find area of Isosceles triangle, ENTER 2\nTo find area of any triangle with 3 sides, ENTER 3 ");
    scanf("%d",&n);
    if(n==1) {
        printf("To find area of Right angle triangle\nEnter Base and Height ");
        scanf("%lf %lf",&b, &h);
        area= 0.5*b*h;     //area of Right angle triangle=0.5*b*h;
        printf("The area of Right angle triangle with base %.2lf and height %.2lf is %.2lf\n",b,h,area);
    }
    else if(n==2) {
        printf("To find area of Isosceles triangle\nEnter side and Height ");
        scanf("%lf %lf",&s1,&h);
        area=0.5*s1*h;     //area of Isosceles triangle=0.5*s*h;
        printf("The area of Isosceles triangle with side %.2lf and height %.2lf is %.2lf\n",s1,h,area);
    }
    else if(n==3) {
        printf("To find area of any triangle with 3 sides\nEnter the length of three sides ");
        scanf("%lf %lf %lf",&s1,&s2,&s3);
        temp=(s1+s2+s3)/2; //area of any triangle with 3 sides=semiperimeter=(s1+s2+s3)/2
        area=sqrt(temp*(temp-s1)*(temp-s2)*(temp-s3));  //area=sqrt(S*(S-s1)*(S-s2)*(S-s3))
        printf("The area of triangle with 3 sides is %.2lf\n",area);
    }
    else
    printf("Please Enter 1,2 or 3 to find area");
    return 0;
}

