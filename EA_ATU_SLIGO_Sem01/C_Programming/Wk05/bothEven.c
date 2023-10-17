/******************************************************************************
*
* File Name: bothEven.c
*
* Description: Program to check if two given numbers are even.
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
    
    if (usersNumOne==usersNumTwo){
        printf("BOTH numbers are even\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Take in two integers from the user and if they are BOTH even then print
*    a message to the screen stating this. 
*
*
******************************************************************************/
