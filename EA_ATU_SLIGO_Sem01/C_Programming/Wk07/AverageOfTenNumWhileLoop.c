/******************************************************************************
*
* File Name: AverageOfTenNumWhileLoop.c
*
* Description: Teake 10 numbers form user and print average.
*
* Programmer: Damian Sikora
*
* Date: 07/Nov/2023
*
* Version 1.1
*
******************************************************************************/
#include <stdio.h>

const int numberOfSteps = 10;

int main(void){

    int userInput = 0;
    int i = 0;
    int sum = 0;
    float average = 0;

    while(i<numberOfSteps){
        printf("Enter any integer number: ");
        scanf("%i", &userInput);
        sum += userInput;
        i++;
    }
    average = (float)sum/numberOfSteps;
    printf("Average of all given numbers = %0.2f\n", average);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Re write the average of 10 numbers program using a while loop
*
*
******************************************************************************/
