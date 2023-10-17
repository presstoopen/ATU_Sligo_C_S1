/******************************************************************************
*
* File Name: and.c
*
* Description: Program to check if two given numbers are greather than 6.
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
    
    if ((usersNumOne>6)&&(usersNumTwo>6)){
        printf("BOTH numbers are greater than 6\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Take in two numbers from the user.
*
*    Check if BOTH numbers are greater than 6.  If they are then print out a
*    message stating this.
*
*
******************************************************************************/
