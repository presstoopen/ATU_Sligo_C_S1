/******************************************************************************
*
* File Name: evenAndNotEven.c
*
* Description: Program to check if the first is Even and the second is
*              Not Even.
*
* Programmer: Damian Sikora
*
* Date: 17/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int usersNumOne = 0;
    int usersNumTwo = 0;
   
    printf("Enter the first number: ");
	scanf("%d",&usersNumOne);
    printf("Enter the secound number: ");
	scanf("%d",&usersNumTwo);
    
    if (evenChecker(usersNumOne)&&!(evenChecker(usersNumTwo))){
        printf("The number %d is Even and the number %d is Not Even.\n",
        usersNumOne, usersNumTwo);
    }

    system("pause");
    return 0;
}

int evenChecker(int userInput){
    if (userInput%2==0){
        return 1;
    }
    else {
        return 0;
    }
}

/******************************************************************************
*
* Task:
*    
*    Take in two numbers and check if the first is Even and the second is
*    Not Even.  Print out an appropriate statement. 
*
*
******************************************************************************/
