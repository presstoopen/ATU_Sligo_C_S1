/******************************************************************************
*
* File Name: LeapYearReturns.c
*
* Description: Program to calculate Leap Year.
*
* Programmer: Damian Sikora
*
* Date: 14/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

#include <stdio.h>

/*Function to check if a year is a leap year*/ 
int isLeapYear(int year) {

    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int userYear;

    while (1) {
        /* Prompt the user to input a year*/
        printf("Enter a year (or a negative number to exit): ");
        scanf("%d", &userYear);

        /*Check if the user wants to exit*/
        if (userYear < 0) {
            printf("Exiting the program.\n");
            break;
        }

        /* Check if the entered year is a leap year*/
        if (isLeapYear(userYear)) {
            printf("%d is a leap year!\n", userYear);
        } else {
            printf("%d is not a leap year.\n", userYear);
        }
    }

    return 0;
}

/******************************************************************************
*
* Task:
*    
*   Re-write the leap year program to continually ask the user for a year and
*   tell them if it is a leap year or not.
*
*   If the user wishes to exit they should type in a minus number.
*
*
******************************************************************************/
