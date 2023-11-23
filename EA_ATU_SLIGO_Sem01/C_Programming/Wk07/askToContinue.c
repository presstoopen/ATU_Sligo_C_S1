/******************************************************************************
*
* File Name: askToContinue.c
*
* Description: Program to calculate running average.
*
* Programmer: Damian Sikora
*
* Date: 23/Nov/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInput;
    float runAvr=0;
    int i=0;
    
    printf("Enter result on 0 to exit: ");
	scanf(" %d",&userInput);

        do{
            i++;
	        runAvr = (runAvr + userInput)/i;
            printf("Runung average: %d %f\n", i, (float)runAvr);
            printf("Enter result on 0 to exit: ");
	        scanf(" %d",&userInput);
        }
        while(userInput !=0);
    
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
