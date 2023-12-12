/******************************************************************************
*
* File Name: NumberOfOccurenceOfLetters.c
*
* Description: Program to check the occurence of the given letters.
*
* Programmer: Damian Sikora
*
* Date: 12/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    char userInputArray[26];
    char occureArray[26];
    int i;
    int j;
    int k;

    printf("Input Array: ");
    for(i=0;i<26;i++){
        userInputArray[i] = (rand()%26 + 97);
        printf("%c", userInputArray[i]);
        if(i<25){
        	printf(",");
		}
		else{
			printf("\n");
		}
    }
    
    for(j=0;j<26;j++){
    	occureArray[j]=0;    	
	}
	
	for(i=0; i<26; i++){
	    k = userInputArray[i];
	    k = k-'a';
	 	occureArray[k] = occureArray[k] +1;
	}
	
	for(j=0;j<26;j++){
		int letters = j + 97;
		printf("\letter %c is %d\n", letters, occureArray[j]);
	}
	printf("\n");
  

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that takes in or randomly generates 20 letters of the
*    alphabet  and put them in an array.
*
*    To keep things simple, put them all as lowercase letters.
*
*   Now determine how many occurances of each letter of the alphabet there are.
*   And print this out.
* 
******************************************************************************/
