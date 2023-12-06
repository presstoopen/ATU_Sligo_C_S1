/******************************************************************************
*
* File Name: toUpperCase.c
*
* Description: Program to recognise the vovals (AEIOUYW) of given character.
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

    char userInput;
  
    printf("Enter the single char: ");
    scanf("%c", &userInput);
    
    userInput = toUpperCase(userInput);

    switch(userInput){
      case 'A' :
          printf("Given character is the vowel\n");
          break;

      case 'E' :
          printf("Given character is the vowel\n");
          break;

      case 'I' :
          printf("Given character is the vowel\n");
          break;

      case 'O' :
          printf("Given character is the vowel\n");
          break;

      case 'U' :
          printf("Given character is the vowel\n");
          break;

      case 'Y' :
          printf("Given character is the vowel\n");
          break;

      case 'W' :
          printf("Given character is the vowel\n");
          break;

      default:
          printf("Given character is the conconant\n");

    }

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
