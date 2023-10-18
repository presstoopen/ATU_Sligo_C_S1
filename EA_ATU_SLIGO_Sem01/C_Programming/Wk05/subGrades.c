/******************************************************************************
*
* File Name: subGrades.c
*
* Description: Program to convert given procentage into the grade and subgrade.
*
* Programmer: Damian Sikora
*
* Date: 18/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int subSign(int reducedProcentage);

int main(void){

    int resultProcentage = 0;
    int procentageLimit[5] = {91,81,71,61,0};
    char resultLetter[5] = {'A','B','C','D','F'};
    char subMark[3] = {'-','+',' '};
    int reducedProcentage;
    int j; /*submark array iteratin*/
    int stopper = 1;
    int i = 0;
   
    printf("Enter the procentage: ");
	scanf("%d",&resultProcentage);
	reducedProcentage = resultProcentage%10; /* dropping the tenths for subMark calculation */
	
    j=subSign(reducedProcentage);

    while (stopper){
        if(resultProcentage >= procentageLimit[i]){
            printf("Equivlent grade for %d%% = %c%c\n",resultProcentage,subMark[j], resultLetter[i]);
            stopper = 0;
        }
        else{
            i++;
        }
    }
    system("pause");
    return 0;
}

/* function to check the submark and return te position stored in subMark array */
int subSign(int reducedProcentage){
	if ((reducedProcentage>0)&&(reducedProcentage<4)){
    return 0;
    }
    else if ((reducedProcentage>3)&&(reducedProcentage<8)){
    return 2;
    }
    else {
    return 1;
    }
}

/******************************************************************************
*
* Task:
*    
*    Modify the previous progamme to print a + or  - after the letter grade. 
*
*    for numbers with the unit 1 to 3 put a - (minus sign)
*
*    for numbers 4 to 7 put nothing
*
*    For numbers 8, 9 or 0 put a + (plus sign).
*
*    Note this should be submitted as a different name that the previous
*    programme to save confussion. 
*
*
******************************************************************************/
