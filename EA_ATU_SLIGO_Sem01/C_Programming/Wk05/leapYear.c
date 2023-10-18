/******************************************************************************
*
* File Name: leapYear.c
*
* Description: Program to calculate Leap Year.
*
* Programmer: Damian Sikora
*
* Date: 18/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInputYear = 0;
    int tempVar=0; /* templorary value */
   
    printf("Enter the Year: ");
	scanf("%d",&userInputYear);
    
    if((userInputYear%4)&&(userInputYear%100>0)){
    	tempVar=1;
	}
	if((tempVar)||(userInputYear%400==0)){
		    printf("The Year %d is the Leap Year\n", userInputYear);
	}
    else{
        printf("The Year %d is not the Leap Year\n", userInputYear);
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*   A leap year is any year divisible by 4,
*
*   unless the year is divisible by 100, but not 400. 
*
*   Write a program to tell if a year input from the key board is a leap year.
*
*   Note from above 1700 wouldn't be a leap year but 2000 would be a leap year.
*
*
******************************************************************************/
