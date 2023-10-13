/******************************************************************************
*
* File Name: graterOrElse.c
*
* Description: Program teaking user imput and if grater than 5 or else.
*
* Programmer: Damian Sikora
*
* Date: 13/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(void){

    int usersNumber = 0;

    printf("Enter the integer number: ");
    scanf("%d", &usersNumber);

    if (usersNumber>5){
        printf("The number is greater than 5.\n");
    }
    else {
        printf("The number is less or equal 5\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Use if-else for the following program.
*
*    Write a program that takes in a number from the user and if the number
*    is greater than 5, print to the screen that the number is greater than 5.
*
*    If its not greater than five print an appropriate statement to the screen.
*
*
******************************************************************************/
