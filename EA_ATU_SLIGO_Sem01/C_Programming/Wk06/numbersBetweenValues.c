/******************************************************************************
*
* File Name: printVertically.c
*
* Description: Program to print numbers between two given values.
*
* Programmer: Damian Sikora
*
* Date: 20/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInputLow = 0;
    int userInputHigh = 0;
    int i = 0;
    int delta = 0;

    printf("Enter low number: ");
    scanf("%d", &userInputLow);
    printf("Enter high number: ");
    scanf("%d", &userInputHigh);
    
    delta=userInputHigh-userInputLow;
	   
    if(delta>0){
        for(i=0;i<delta+1;i++){
		    printf("%d\n",userInputLow);
            userInputLow++;
        }
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Ask the user for a low number and a high number.
*
*  Print all the number from low number to high number each on a seperate line.
*
*
******************************************************************************/
