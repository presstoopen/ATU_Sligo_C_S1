/******************************************************************************
*
* File Name: largestNumberInAnArray.c
*
* Description: Program that takes ten integers from the user and puts them in
               an array. Then print out the numbers in the array and on the
               line following print out the largest number in the array.
*
* Programmer: Damian Sikora
*
* Date: 7/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

char toUpperCase(char userInput);

int main(void){

    int initialArray[10];
    int userInput;
    int i;
    int j;
    int numberToCompare = 0;
    int largestNumber = 0;
    
    for(i=0; i<10; i++){
        printf("Write number: ");
        scanf("%d", &initialArray[i]);
    }

    printf("\nGiven array:\n");

    for(j=0; j<10; j++){
        printf("%d\n", initialArray[j]);
        numberToCompare = initialArray[j];
        if(largestNumber<numberToCompare){
            largestNumber = numberToCompare;
        }
    }

    printf("\nLarges number in given array: %d\n", largestNumber);
    
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes ten integers from the user and puts them in an
*    array.
*
*    Then print out the numbers in the array and on the line following print
*    out the largest number in the array. 
*
*
******************************************************************************/
