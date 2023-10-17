/******************************************************************************
*
* File Name: notBetween.c
*
* Description: Program to check if given number is out range between 3 and 8.
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
    
    if (!((usersNum>=3)&&(usersNum<=8))){
        printf("The given number is out of range between 3 and 8.\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Take in a number from the user and if it is smaller than 3 or larger
*    than 8 print an appropriate message to the screen.
*
*
******************************************************************************/
