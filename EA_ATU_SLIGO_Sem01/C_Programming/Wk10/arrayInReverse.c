/******************************************************************************
*
* File Name: arrayInReverse.c
*
* Description: Program initialises an array of 10 integers and then prints
*              them out in reverse using a loop.
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
    int i;
    int j;
    
    for(i=0; i<10; i++){
    	initialArray[i] = i;
    }

    for(j=10; j>=0; j--){
        printf("%d\n", initialArray[i]);
    }
    
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that initialises an array of 10 integers and then prints
*    them out in reverse using a loop. 
*
*
******************************************************************************/
