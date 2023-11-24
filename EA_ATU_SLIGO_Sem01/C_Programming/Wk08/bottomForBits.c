/******************************************************************************
*
* File Name: bottomForBits.c
*
* Description: Check if LSB on the user input is 0 or 1.
*
* Programmer: Damian Sikora
*
* Date: 14/Nov/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>


int main(void){

    int userInput = 0;
    int bottomFourth = 0;

    printf("Enter first integer number: ");
    scanf("%d", &userInput);

    bottomFourth = userInput & 0x8;
  
    printf("The bottom fourth bit of %d = %d\n", userInput, bottomFourth);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes in a number from the user and determine what
*    number is represented by the bottom four bits only.
*
*
******************************************************************************/
