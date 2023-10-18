/******************************************************************************
*
* File Name: printHorizontally.c
*
* Description: Program to print from 1 to 10 Horizontally.
*
* Programmer: Damian Sikora
*
* Date: 18/Oct/2023
*
* Version 1.2
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int i = 0;
   
    for(i=1; i<11; i++){
        printf("%d ",i);
    }
    
	printf("\n");
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program which prints the numbers 1 to 10 on the same line with
*    a space between each.
*
*
******************************************************************************/
