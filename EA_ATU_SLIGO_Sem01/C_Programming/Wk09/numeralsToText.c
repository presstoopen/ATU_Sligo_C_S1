/******************************************************************************
*
* File Name: numeralsToText.c
*
* Description: Program teaks numerical input form the user and convert it to
               text format.
*
* Programmer: Damian Sikora
*
* Date: 6/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

char toUpperCase(char userInput);

int main(void){

    int userInput;
    char *decodedText[10];
    int i = 0;
    int modNumber;
    char *numAsText[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    printf("Enter the number: ");
    scanf("%d", &userInput);
    
    while (userInput>0){
    	
        modNumber = userInput%10;
        decodedText[i]=numAsText[modNumber];
        //printf("%s ", numAsText[modNumber]);
        userInput = userInput / 10;
        i++;
    }
    
    while(i>0){
    	i--;
    	printf("%s ", decodedText[i]);
	}
	printf("\n");
    
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that converts numbers to words. For example, 895 results
*    in eight nine five.
*
*    The number should be taken in from the user when the programme is run.
*
*    The text should then be printed out on the screen. 
*
*
******************************************************************************/
