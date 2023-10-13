/******************************************************************************
*
* File Name: lessThanEq.c
*
* Description: Program to print on screen when user input less or equal 4.
*
* Programmer: Damian Sikora
*
* Date: 13/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int usersNumber = 0;

    printf("Enter the integer number: ");
    scanf("%d", &usersNumber);

    if (usersNumber<=4){
        printf("The number you input is less than or equal to 4.\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes in a number from the user and if the number is
*    less than or equal to 4, prints out on the screen,
*
*    The number you input is less than or equal to 4.
*
*
******************************************************************************/
