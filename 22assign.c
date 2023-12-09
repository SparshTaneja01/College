//22.WAP to identify gender in single character and print full gender (Ex: if input is 'M'– it should print "Male").

#include <stdio.h>
int main() 
{
    char gender;
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter gender (M/F): ");
    scanf(" %c", &gender);
    if (gender == 'M') {
        printf("Male\n");
    } 
    else
        printf("Female\n");
    return 0;
}