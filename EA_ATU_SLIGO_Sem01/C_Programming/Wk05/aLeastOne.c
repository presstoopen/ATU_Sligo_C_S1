/******************************************************************************
*
* File Name: aLeastOne.c
*
* Description: Program to check if a least one of the given number > 10.
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
    
    if ((usersNumOne>10)||(usersNumTwo>10)){
        printf("A list one of BOTH numbers are greather that 10\n");
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Take in two numbers from the user and if either one or both of the numbers
*    is greater than 10 then print an appropriate statment to the screen.  
*
*
******************************************************************************/
