/******************************************************************************
*
* File Name: factorialOfANumber.c
*
* Description: Function to calculates the factorial of that number.
*
* Programmer: Damian Sikora
*
* Date: 26/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int factorialUserInput(int userInput);

int main(void){

    int userInput = 0;
    int factorial = 0;

    printf("Please enter number to get factioral:\n");
    scanf("%d",&userInput);
    factorial = factorialUserInput(userInput);
    printf(" =%d\n", factorial);

    system("pause");
    return 0;
}

int factorialUserInput(int userInput){
	int i = 0;
    int factorialResult = userInput; 
    printf("%d!= %d", userInput, userInput);
    for(i=userInput; i>1; i--){
        printf("x%d",i-1);
        factorialResult *= (i-1);
    }
    return factorialResult;

}

/******************************************************************************
*
* Task:
*
*    Write a function that when passed a number calculates the factorial of
*    that number and returns it.
*
*    Then write a main function that asks the user for a number, passes it to
*    the function and prints out the number that returns.
*
*    e.g. of factorial
*
*    5! = 5x4x3x2x1 = 120.    
*
*
******************************************************************************/
