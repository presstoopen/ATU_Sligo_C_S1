/******************************************************************************
*
* File Name: toUpperCase.c
*
* Description: Teke one char form user and check if it is upper case, if it is
               small letter then change to capital and return.
*
* Programmer: Damian Sikora
*
* Date: 4/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

char toUpperCase(char userInput);

int main(void){

    char userInput;
    int isUpperCase;
    char newUserInput;
  
    printf("Enter the single char: ");
    scanf("%c", &userInput);
    
    userInput = toUpperCase(userInput);
    
  	printf("Capital letter of the given char: %c\n", userInput);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Function Name : toUpperCase
*
* Input Parameters : char - user input
*
* Returns : char - user input if capital letter or modyfied capital letter.
*
* Purpose of funcion: Function to check if user tape cappital letter. If givem
*                     letter is small it will change it to be capital
*
*
******************************************************************************/

char toUpperCase(char userInput){
	int isUpperCase;

    isUpperCase = userInput & 0x20;
    
    if (isUpperCase > 0){
    	userInput ^= (1<<5);
	}
    else{
    	userInput = userInput;
	}
	
	return userInput;
	
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes a character from the keyboard and prints out
*    whether it is a vowel or a consonant.
*
*    Try using a switch statement  instead of if else in this programme.
*
*
******************************************************************************/
