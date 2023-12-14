/******************************************************************************
*
* File Name: differencesBetweenStrings.c
*
* Description: Program to compare two strings and print the difference.
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
		    int i;
    for (i = 0; userInput1[i] != '\0' && userInput2[i] != '\0'; i++) {
        if (userInput1[i] != userInput2[i]) {
           printf("Strings differ at position %d: %c and %c\n", i+1, userInput1[i], userInput2[i]);
        }
    }

    if (userInput1[i] != '\0' || userInput2[i] != '\0') {
        printf("Strings have different lengths.\n");
    }

	}

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Modify the previous program to do the following when the strings are
*    not equal:
*
*    Prints the characters from each string at the point where the strings are
*    not equal.
* 
******************************************************************************/
