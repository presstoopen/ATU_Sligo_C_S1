/******************************************************************************
*
* File Name: equality.c
*
* Description: Program to print info on screen when user input equal 5.
*
* Programmer: Damian Sikora
*
* Date: 10/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int usersNumber = 0;

    printf("Enter the integer number: ");
    scanf("%d", &usersNumber);

    if (usersNumber==5){
        printf("The number you input is equal to 5.\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes in a number from the user and if the number is
*    equal to 5, prints out on the screen,
*
*    The number you input is equal to 5.
*
*
******************************************************************************/
