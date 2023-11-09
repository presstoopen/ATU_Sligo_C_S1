/******************************************************************************
*
* File Name: leapYearWhileLoop.c
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

int lapYear(int userInputYear);

int main(void){

    char userInputYear = 0;
    
   
    printf("Enter the Year or \"-\" to exit: ");
	scanf("%c",&userInputYear);
	printf("%c", (int)userInputYear);
    
    while(userInputYear != '-'){
        lapYear(userInputYear);
        printf("Enter the Year or \"-\" to exit: ");
	    scanf("%c",&userInputYear);
	    
    }
    
    system("pause");
    return 0;
}

int lapYear(int userInputYear){
	
	userInputYear = (int)userInputYear;
	int tempVar=0; /* templorary value */
	
	if((userInputYear%4)&&(userInputYear%100>0)){
    	    tempVar=1;
	}
	if((tempVar)||(userInputYear%400==0)){
	    printf("The Year %d is the Leap Year\n", userInputYear);
    }
    else{
        printf("The Year %d is not the Leap Year\n", userInputYear);
    }
}

/******************************************************************************
*
* Task:
*    
*   Re-write the leap year program to continually ask the user for a year and
*   tell them if it is a leap year or not.
*
*   If the user wishes to exit they should type in a minus number.
*
*
******************************************************************************/
