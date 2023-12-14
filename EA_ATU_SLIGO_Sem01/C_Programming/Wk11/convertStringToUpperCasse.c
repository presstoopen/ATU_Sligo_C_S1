/******************************************************************************
*
* File Name: convertStringToUpperCasse.c
*
* Description: Program to convert given string to upper case.
*
* Programmer: Damian Sikora
*
* Date: 14/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

  /* Function to convert a string to uppercase */
void convertToUpperCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

int main() {
    
    char input[100];

    /* Prompt the user for input*/
    printf("Enter a string: ");
    scanf("%s", input);

    /* Convert the string to uppercase*/
    convertToUpperCase(input);

    /* Print the uppercase string*/
    printf("Uppercase: %s\n", input);
  

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Take in a string of characters and using the toUppercase function you
*    developed previously, rewrite the string as all uppercase letters and
*    print the output.
* 
******************************************************************************/
