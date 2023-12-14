/******************************************************************************
*
* File Name: differencesBetweenStrings.c
*
* Description: Program converting hex to decimal.
*
* Programmer: Damian Sikora
*
* Date: 13/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Function to convert a HEX character to its decimal  */
int hexCharToDecimal(char hexChar) {
    if (hexChar >= '0' && hexChar <= '9') {
        return hexChar - '0';
    } else if (hexChar >= 'A' && hexChar <= 'F') {
        return hexChar - 'A' + 10;
    } else if (hexChar >= 'a' && hexChar <= 'f') {
        return hexChar - 'a' + 10;
    } else {
        /* Invalid HEX character*/
        fprintf(stderr, "Error: Invalid HEX character '%c'\n", hexChar);
        exit(EXIT_FAILURE);
    }
}

/* Function to convert a HEX string to its decimal equivalent */
int hexToDecimal(const char* hexString) {
    int i;
    int decimal = 0;
    for (i = 0; hexString[i] != '\0'; i++) {
        decimal = decimal * 16 + hexCharToDecimal(hexString[i]);
    }
    return decimal;
}

int main() {
    char inputString[100];
    int i;

    /* Input the HEX string*/
    printf("Enter a HEX number: ");
    fgets(inputString, sizeof(inputString), stdin);

    /* Remove newline character from the input*/
    inputString[strcspn(inputString, "\n")] = '\0';

    /* Check if the string is a valid HEX number*/
    int isValidHex = 1;
    for ( i = 0; inputString[i] != '\0'; i++) {
        if (!isxdigit(inputString[i])) {
            isValidHex = 0;
            break;
        }
    }

    /* Print the result based on whether it's a valid HEX number or not*/
    if (isValidHex) {
        int decimalEquivalent = hexToDecimal(inputString);
        printf("Decimal equivalent: %d\n", decimalEquivalent);
    } else {
        printf("Error: Not a valid HEX number.\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes a string from the keyboard and tests to see if
*    the string represents a HEX number (ie; contains only the digits 0 to 9
*    and the letters A to F or a to f).
*
*    If it is a HEX number the program should print out the decimal equivalent,
*    otherwise it should print and appropriate error message.
* 
******************************************************************************/
