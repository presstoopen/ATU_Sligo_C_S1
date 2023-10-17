/******************************************************************************
*
* File Name: roundInteger.c
*
* Description: Program to round real number to integer closest equivalent.
*
* Programmer: Damian Sikora
*
* Date: 17/Oct/2023
*
* Version 1.3
*
******************************************************************************/
#include <stdio.h>

int inputRounding(float userInput);

int main(void){

    float userInput = 0;
   
    printf("Enter the real number (at least 3 decimal) ");
	scanf("%f",&userInput);
    userInput=inputRounding(userInput); /*Call sounding function*/
    printf("Rounded number = %d\n", (int)userInput);
	
    system("pause");
    return 0;
}

int inputRounding(float userInput){
	int roundedNumber = 0;
    float decimalValue = 0;
    
    
	decimalValue = userInput*100;
	roundedNumber = (int)userInput; /*the direct casting not working */
	roundedNumber = (int)decimalValue-roundedNumber*100;
	 
	if (roundedNumber>=49){
		userInput = userInput + 1;
		return (int)userInput;
	}
	else{
		return (int)userInput;
	}
	
}

/******************************************************************************
*
* Task:
*    
*    Write a function that takes a real number as an argument and returns the
*    integer closest to that number. For example, 38.34 would be returned as
*    38 while 52.738 would be returned as 53.
*
*    Then write a main function to test this.
*
*
******************************************************************************/
