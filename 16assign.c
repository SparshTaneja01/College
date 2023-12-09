//16. WAP to validate the username and password entered by the user is correct or not using the predefined username and password.

#include <stdio.h>
#include <string.h>
int main()
{
    char username[] = "Sparsh";
    char password[] = "Dogs";
    char username1[50],password1[50];
    printf("\nSPARSH TANEJA 2316012133");
    printf("\nEnter username: ");
    scanf("%s", username1);
    printf("Enter password: ");
    scanf("%s", password1);
    if (strcmp(username1, username) == 0 && strcmp(password1, password)== 0) {
        printf("Login successful. Welcome, %s!\n", username);
    }
    else
        printf("Login failed. Wrong username and password.\n");
    return 0;
}
