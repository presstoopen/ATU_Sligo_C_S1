/******************************************************************************
*
* File Name: stringCompare.c
*
* Description: Program to compare strings.
*
* Programmer: Damian Sikora
*
* Date: 12/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void){

    char userInput1[200];
    char userInput2[200];

    printf("Input string 1: ");
	fgets(userInput1,sizeof(userInput1),stdin);
	printf("Input string 2: ");
	fgets(userInput2,sizeof(userInput2),stdin);

	if (strcmp(userInput1, userInput2)==0){
		printf("both string are eqial\n");
	}

	else {
		printf("both string are not equal\n");
	}

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes two strings from the user, compares them and
*    does the following:
*
*    If the strings are equal prints Both strings are equal on the screen.
*    If the strings are not equal prints Both strings are NOT equal on the
*    screen.
*    You should use the strcmp() library function, from string.h
* 
******************************************************************************/
