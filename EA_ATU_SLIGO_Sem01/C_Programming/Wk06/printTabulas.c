/******************************************************************************
*
* File Name: printVertically.c
*
* Description: Program to print numbers from 1 to 25 in tabulas and row with 5.
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

    int i = 0;
	   
    for(i=0;i<25;i++){
        if(i%5>0){
            printf("%d\t",i+1);
        }
        else{
            printf("\n%d\t",i+1);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Print the numbers 1 to 25 with five sets of five numbers to a line.
*    i.e.
*
*     1    2    3   4   5
*     6    7    8   9   10
*     11   12   13  14  15
*     16   17   18  19  20
*     21   21   23  24  25 
*
*
******************************************************************************/
