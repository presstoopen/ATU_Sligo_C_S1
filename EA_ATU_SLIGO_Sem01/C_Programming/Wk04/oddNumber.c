/******************************************************************************
*
* File Name: oddNumber.c
*
* Description: Program teaking user imput and checkin for odd number.
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

    if (usersNumber>0){
        printf("The number you input is odd.\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes in a number from the user and if the number is
*    Odd, prints out on the screen,
*
*    The number you input is odd.
*
*    Make sure to check that nothing appears when you put in an even number.
*
*
******************************************************************************/
