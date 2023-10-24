/******************************************************************************
*
* File Name: inputTenNum.c
*
* Description: Program to scan and print user input ten times.
*
* Programmer: Damian Sikora
*
* Date: 24/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInput = 0;
    int i = 0;

    for(i=0; i<10; i++){
        printf("Enter any integer number: ");
        scanf("%i", &userInput);
        printf("%d\n", userInput);
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that asks the user for a number 10 times.
*
*    After each number is input the number should be printed out and then ask
*    for another number.
*
*
******************************************************************************/
