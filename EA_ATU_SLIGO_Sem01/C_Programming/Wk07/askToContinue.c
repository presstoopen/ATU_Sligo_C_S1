/******************************************************************************
*
* File Name: askToContinue.c
*
* Description: Program to calculate running average.
*
* Programmer: Damian Sikora
*
* Date: 24/Nov/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInput=1;
    float runAvr=0;
    int i=0;
    
    while(userInput>0){
        printf("Enter result or 0 to exit: ");
	    scanf(" %d",&userInput);
	        
		if(userInput == 0){
			break;
		}
	runAvr = (runAvr*i + userInput)/(i+1);
    printf("Runung average: %.2f\n", runAvr);
        
    i++;
    }
        
    system("pause");
    return 0;
}


/******************************************************************************
*
* Task:
*    
*   Write a program that continually asks the user for numbers and prints the
*   current average after each intput.
*
*   If the user wishs to stop inputing they should input a zero.
*
*   Use a while loop for this.
*
*
******************************************************************************/
