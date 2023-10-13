/******************************************************************************
*
* File Name: oddAndEven.c
*
* Description: Program print out if user input number is odd or even.
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

    if ((usersNumber%2)>0){
        printf("The number is odd\n");
    }
    else {
        printf("The number is even\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Use if else for the program below.
*
*    Write a program that takes in a number from the user and prints out if
*    it is an odd or even number.
*
*
******************************************************************************/
