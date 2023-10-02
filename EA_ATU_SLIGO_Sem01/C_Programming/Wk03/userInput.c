/******************************************************************************
*
* File Name: userInput.c
*
* Description: Function that will add and print the two given variable a and b
*
* Programmer: Damian Sikora
*
* Date: 02/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

void main(vois){
    int x = 0;
    printf("Please enter the integer numcer: ");
    scanf("%d",&x);/*important note on this line is the sign &*/
    printf("\nThe number you have been entered = %d\n", x);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*     Use the scanf function to take in an integer and then print this number
*     to the screen. 
*     e.g.
*
*     int x;
*
*     scanf("%d", &x);
*
*     The & before the variable is very important and is the most common
*     mistake with the scanf function to forget it.
*
******************************************************************************/