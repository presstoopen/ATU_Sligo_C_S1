/******************************************************************************
*
* File Name: printVertically.c
*
* Description: Program to print even numbers from 2 to 20.
*
* Programmer: Damian Sikora
*
* Date: 20/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

const int lowNumber = 2;
const int highNumber = 20;

int main(void){

    int i = 0;
    int delta = highNumber-lowNumber;
    int counter = lowNumber;
	   
    for(i=0;i<delta+1;i++){
        if(counter%2==0){
		    printf("%d\n",counter);
        }
        counter++;
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Print all the even numbers between 2 and 20 each on a line of their own.
*
*
******************************************************************************/
