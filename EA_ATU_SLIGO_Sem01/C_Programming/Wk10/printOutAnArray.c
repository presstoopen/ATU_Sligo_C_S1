/******************************************************************************
*
* File Name: printOutAnArray.c
*
* Description: Program initialising an array and printing it our.
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

    char *numAsText[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    int i = 11;

    printf("Count down to zero:\n\n");

    
    while (i>0){
    	i--;
        printf("\t%d - %s\n", i, numAsText[i]);
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    write a program that initialises an array of integers and then prints
*    out the array using a loop. 
*
*
******************************************************************************/
