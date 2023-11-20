/******************************************************************************
*
* File Name: leastSignificantBit.c
*
* Description: Check if LSB on the user input is 0 or 1.
*
* Programmer: Damian Sikora
*
* Date: 13/Nov/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>


int main(void){

    int userInput = 0;
    int lsb = 0;

    printf("Enter first integer number: ");
    scanf("%d", &userInput);

    lsb = userInput & 1;
  
    printf("The LSB in %d = %d\n", userInput, lsb);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program to ask the user to enter an integer.
*
*    Determine if the LSB (Least Significant Bit) is a 1 or a 0.
*
*
******************************************************************************/
