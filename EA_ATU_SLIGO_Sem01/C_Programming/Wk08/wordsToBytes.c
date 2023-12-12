/******************************************************************************
*
* File Name: bottomForBits.c
*
* Description: Program to determine what is representing bottom 4 bits in
               number given by user.
*
* Programmer: Damian Sikora
*
* Date: 24/Nov/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>


int main(void){

    int userInput = 0;
    int bottomFourth = 0;

    printf("Enter number: ");
    scanf("%d", &userInput);

    bottomFourth = userInput & 0x0F;
  
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
