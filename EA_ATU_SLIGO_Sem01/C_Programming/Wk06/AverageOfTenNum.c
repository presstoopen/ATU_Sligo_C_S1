/******************************************************************************
*
* File Name: AverageOfTenNum.c
*
* Description: Teake 10 numbers form user and print average.
*
* Programmer: Damian Sikora
*
* Date: 25/Oct/2023
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

    for(i=0; i<numberOfSteps; i++){
        printf("Enter any integer number: ");
        scanf("%i", &userInput);
        sum += userInput;
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
*    Modify the previous program to give the average of ten numbers input by
*    the user.
*
*    make sure that this can handle situations where the average my have a
*    fractional part. e.g. the average is 23.45 etc.
*
*
******************************************************************************/
