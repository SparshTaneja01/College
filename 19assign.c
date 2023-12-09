//19.WAP to perform the pre increment and pre decrement operator on two integers and print both original value and updated value.

#include <stdio.h>
int main() 
{
    int num1 = 10;
    int num2 = 5;
    printf("Original value of num1: %d\n", num1);//ORIGINAL(10) 
    printf("Pre-incrementing num1: %d\n", ++num1);          //Pre-increment
    printf("Pre-decrementing num1: %d\n", --num1);          //Pre-decrement
    printf("Original value of num2: %d\n", num2);//ORIGINAL(5)
    printf("Pre-incrementing num2: %d\n", ++num2);          //Pre-increment
    printf("Pre-decrementing num2: %d\n", --num2);          //Pre-decrement
    return 0;
}
