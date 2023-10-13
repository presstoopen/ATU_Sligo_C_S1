/******************************************************************************
*
* File Name: evenNumber.c
*
* Description: Program teaking user imput and checkin for even number.
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
    usersNumber = usersNumber % 2;

    if (usersNumber==0){
        printf("The number you input is even.\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes in a number from the user and if the number is
*    Even, prints out on the screen,
*
*    The number you input is even.
*
*    Make sure to check that nothing appears when you put in an odd number.
*
*
******************************************************************************/
