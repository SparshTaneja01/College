//35. Write a C program to swap first and last digits of a number.  
//(LEARN)
//FIX (NW)

#include<stdio.h>
#include<math.h>
int main()
{
    int number, first, end, swap, digit, divide;
    printf("SPARSH TANEJA 2316012133\n");
    printf("Enter the number");
    scanf("%d",&number);
    digit = log10(number);  //log10(12345) = 4
    divide = pow(10, digit);  //10000
    first = number / divide; //1
    number = number % divide;  //12345%10000 = 2345
    end = number % 10; //2345 % 10 = 5
    number = number / 10;    //234
    swap = end * divide + number *10 + first;   //52341;
    printf("swap value is %d",swap);
    return 0;
}