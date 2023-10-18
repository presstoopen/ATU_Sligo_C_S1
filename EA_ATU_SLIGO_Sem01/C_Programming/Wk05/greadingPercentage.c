/******************************************************************************
*
* File Name: greadingPercentage.c
*
* Description: Program to convert given procentage into the grade.
*
* Programmer: Damian Sikora
*
* Date: 18/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int resultProcentage = 0;
    int procentageLimit[5] = {91,81,71,61,0};
    char resultLetter[5] = {'A','B','C','D','F'};
    int stopper = 1;
    int i = 0;
   
    printf("Enter the procentage: ");
	scanf("%d",&resultProcentage);
    
    while (stopper){
        if(resultProcentage >= procentageLimit[i]){
            printf("Equivlent grade for %d%% = %c\n",resultProcentage, resultLetter[i]);
            stopper = 0;
        }
        else{
            i++;
        }
    }
    

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    A lecturer generates letter grades using the table below.
*    ________________________
*    |    %      |   Grade   |
*    |  91-100   |     A     |
*    |  81-90    |     B     |
*    |  71-80    |     C     |
*    |  61-70    |     D     |
*    |   0-60    |     F     |
*    |___________|___________|
*
*    Write a programme that would ask the lecturer to enter a percentage and
*    then have the programme print out the appropriate grade.
*
*
******************************************************************************/
