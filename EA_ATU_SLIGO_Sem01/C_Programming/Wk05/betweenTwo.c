/******************************************************************************
*
* File Name: betweenTwo.c
*
* Description: Program to check if given number is in range between 1 and 10.
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

    int usersNum = 0;
   
    printf("Enter the number: ");
	scanf("%d",&usersNum);
    
    if ((usersNum>1)&&(usersNum<10)){
        printf("The given number is in range between 1 and 10\n");
    }
    else {
        printf("The given number is out of range between 1 and 10\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Take in one number and determine if the number falls between 1 and 10.
*    
*    If it does then print out that it does.
*
*    If it doesn't then print out that it doesn't.
*
*
******************************************************************************/
