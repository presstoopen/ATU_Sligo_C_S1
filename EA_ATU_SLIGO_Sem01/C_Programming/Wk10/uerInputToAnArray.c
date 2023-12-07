/******************************************************************************
*
* File Name: userInputToAnArray.c
*
* Description: Program that asks the user to input 5 numbers, put these five
*    numbers into an array and print them in both forward and reverse.
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
    char *numName[] = {"first", "secound", "third", "fourth", "fifth"};
    int userInput;
    int i;
    int j;
    
    for(i=0; i<5; i++){
        printf("Write %s number: ", numName[i]);
        scanf("%d", &initialArray[i]);
    }

    printf("\nArray in order:\n");

    for(j=0; j<=4; j++){
        printf("%d\n", initialArray[j]);
    }

    printf("\nArray in revers:\n");

    for(j=4; j>=0; j--){
        printf("%d\n", initialArray[j]);
    }
    
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that asks the user to input 5 numbers, put these five
*    numbers into an array and print them in both forward and reverse. 
*
*
******************************************************************************/
