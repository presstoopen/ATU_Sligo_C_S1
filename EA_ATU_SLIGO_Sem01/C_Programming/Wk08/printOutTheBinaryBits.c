/******************************************************************************
*
* File Name: printOutTheBinaryBits.c
*
* Description: Program to print the binary representation of an integer.
*
* Programmer: Damian Sikora
*
* Date: 14/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

/* Function to print the binary representation of an integer */
void printBinary(int num) {
    printf("Binary representation of %d: ", num);

    /* Size of an integer in bits */
    int size = sizeof(int) * 8;

    /* Loop through each bit position and print the corresponding bit */
    int i;
    for (i = size - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    int userNumber;

    /* Prompt the user to input an integer */
    printf("Enter an integer: ");
    scanf("%d", &userNumber);

    /* Call the function to print the binary representation */
    printBinary(userNumber);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a function that is passed an Integer from the user and then prints
*    the binary bits associated with this integer.  The Function doesn't need
*    to return anything.
*
*    Then write a main function to test your new function.
*
*
******************************************************************************/
