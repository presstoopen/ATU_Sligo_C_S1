/******************************************************************************
*
* File Name: SumOfTenNum.c
*
* Description: Teake 10 numbers form user and print sum.
*
* Programmer: Damian Sikora
*
* Date: 24/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInput = 0;
    int i = 0;
    int sum = 0;

    for(i=0; i<10; i++){
        printf("Enter any integer number: ");
        scanf("%i", &userInput);
        sume =+ userInput;
    }
    printf("Sume of all ten numbers = %d\n", sum);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Modify the previous program to take in 10 numbers from the user and then
*    print out the sum of the 10 numbers.
*
*
******************************************************************************/
