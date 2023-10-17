/******************************************************************************
*
* File Name: minConversion.c
*
* Description: Program to changes MINUTES to the form of hours and minutes.
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

    int userInput = 0;
	int minAmount = 0;
	int hoursAmount = 0;
   
    printf("Enter the amount of minutes: ");
	scanf("%d",&userInput);
	hoursAmount = userInput/60;
	minAmount = userInput%60;
    
    printf("%d Minutes = %d Hour(s) %d Minutes.\n", userInput, hoursAmount, minAmount);
	
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a programme that asks the user for an number of minutes and then
*    changes this to the form of hours and minutes.
*
*    e.g. 90 Minutes = 1 Hour 30 Minutes.
*
*
******************************************************************************/
