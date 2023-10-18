/******************************************************************************
*
* File Name: printVertically.c
*
* Description: Program to print numbers between given values.
*
* Programmer: Damian Sikora
*
* Date: 18/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int sortUserInput(int numOne, int numTwo);

int main(void){

    int userInput[2] = {0,0};
    int i = 0;
    int delta = 0;

    printf("Enter first number: ");
    scanf("%d", &userInput[0]);
    printf("Enter secound number: ");
    scanf("%d", &userInput[1]);
    
    userInput=sortUserInput(userInput[0], userInput[1]);

    delta=userInput[1]-userInput[0];
    
    for(i=userInput[0];i<userInput[1]+1;i++);
    printf 

    system("pause");
    return 0;
}

int sortUserInput(int numOne, int numTwo){
    int tempNumbers[2] = {0,0};
    if (numOne>NumTwo){
        tempNumbers[0]=numTwo;
        tempNumbers[1]=numOne;        
        return tempNumbers;
    }
    else{
        tempNumbers[0]=numOne;
        tempNumbers[1]=numTwo;
        return tempNumbers;
    }
}

/******************************************************************************
*
* Task:
*    
*    Write a progame to print the numbers 1 to 10 each on a line of their own.
*
*
******************************************************************************/
