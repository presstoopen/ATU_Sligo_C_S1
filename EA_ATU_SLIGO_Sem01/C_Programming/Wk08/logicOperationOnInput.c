/******************************************************************************
*
* File Name: AverageUntil.c
*
* Description: To show user the logical resoult of AND, OR and XORing for the
*              two inputed numbers together.
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

    int userInput1 = 0;
    int userInput2 = 0;
    int logicalAnd;
    int logicalOr;
    int logicalXor;
    

    printf("Enter first integer number: ");
    scanf("%d", &userInput1);
    printf("Enter secound integer number: ");
    scanf("%d", &userInput2);
    
    logicalAnd = userInput1 & userInput2;
    logicalOr = userInput1 | userInput2;
    logicalXor = userInput1 ^ userInput2;
    
   
    printf("Logic operation on %d \& %d = %d\n", userInput1, userInput2, logicalAnd);
    printf("Logic operation on %d \| %d = %d\n", userInput1, userInput2, logicalOr);
    printf("Logic operation on %d \^ %d = %d\n", userInput1, userInput2, logicalXor);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that asks the user to input two integers.
*
*    Then print out the result of logically AND, OR and XORing the two
*    numbers together.
*
*
******************************************************************************/
