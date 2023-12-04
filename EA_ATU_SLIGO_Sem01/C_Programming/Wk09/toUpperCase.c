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
*    Write a function that takes a single char as an argument and does the
*    following:
*
*     - If the char is a lowercase letter, returns the uppercase version of it.
*     - Otherwise return the char unchanged.
*
*    Write a main function to test this function.
*
*    Note: there is a function in the standard library called toupper()
*          which does this but you are not to use this function you should
*          write your own.
*
*
******************************************************************************/
