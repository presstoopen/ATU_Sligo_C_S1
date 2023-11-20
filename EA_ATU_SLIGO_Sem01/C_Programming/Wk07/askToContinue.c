/******************************************************************************
*
* File Name: askToContinue.c
*
* Description: Program to calculate sume of two given numbers and ask user if
*              would like to continue caltulation.
*
* Programmer: Damian Sikora
*
* Date: 20/Nov/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int sumeOfTwoNumbers(int numOne, int numTwo);

int main(void){

    char userStatement;
    int numOne;
    int numTwo;
    int sumOfTwo;
    
    printf("Would you like to calculate sume of two numbers (y-Yes or n-No): ");
	scanf("%c",&userStatement);

        do{
	        
	        if(userStatement == 'y'){
			    printf("Enter first number: ");
        	    scanf("%d",&numOne);
                printf("Enter secound number: ");
        	    scanf("%d",&numTwo);
                sumOfTwo = sumeOfTwoNumbers(numOne, numTwo);
                printf("Sume of two given numbers: %d\n",sumOfTwo);

            }
            printf("Would you like to calculate sume of two numbers (y-Yes or n-No): ");
            scanf(" %c",&userStatement); /*Space added to prevent the repeateion*/
        }
        while(userStatement!='n');
    
    system("pause");
    return 0;
}

int sumeOfTwoNumbers(numOne, numTwo){
	
    int sumeOfTwoNumbers;
	sumeOfTwoNumbers = numOne + numTwo;

    return sumeOfTwoNumbers;
}

/******************************************************************************
*
* Task:
*    
*   Write a program to compute the sum of two numbers.
*
*   Ask the user if they wish to compute the sum of two numbers.
*
*   The answers should be y for Yes or n for No.
*
*   if the answer is yes then ask for the two numbers and then print out the
*   sum of the two.
*
*   Then ask again and keep asking until the user enters n for No.
*
*
******************************************************************************/
