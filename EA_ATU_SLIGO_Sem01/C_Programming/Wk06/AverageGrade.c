/******************************************************************************
*
* File Name: A.c
*
* Description: Teake 10 scores and calculating grade + average scores.
*
* Programmer: Damian Sikora
*
* Date: 25/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

const int numberOfStudents = 10;

int subSign(int resultProcentage);
char alphaGrade(int resultProcentage);

int main(void){

    int resultProcentage = 0;
    char subMark[3] = {'-','+',' '};
    int reducedProcentage;
    int j; /*submark array iteratin*/
    int stopper = 1;
    int i = 0;
    int sumeAllResoult = 0;
    float calcAverage = 0;
    
   
    for(i=0; i<numberOfStudents; i++){
        printf("Enter the procentage for student #%d: ",i+1);
	    scanf("%d",&resultProcentage);
        char calcMark = alphaGrade(resultProcentage);
        char calcSubSign = subSign(resultProcentage);
        printf("Resoult for student #%d = %c%c\n",i+1 ,subMark[calcSubSign], calcMark);
        sumeAllResoult += resultProcentage;
    }
    
    calcAverage = (float)sumeAllResoult/10;
    printf("the average of all resoult: %0.2f%%\n", calcAverage);

    system("pause");
    return 0;
}

/* function to check the submark and return te position stored in subMark array */
int subSign(int resultProcentage){
    int reducedProcentage = resultProcentage%10; /* dropping the tenths for subMark calculation */
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

char alphaGrade(int resultProcentage){

    int procentageLimit[5] = {91,81,71,61,0};
    char resultLetter[5] = {'A','B','C','D','F'};
    int stopper = 1;
    int i = 0;

    while (stopper){
        if(resultProcentage >= procentageLimit[i]){
            return resultLetter[i];
            stopper = 0;
        }
        else{
            i++;
        }
    }
}

/******************************************************************************
*
* Task:
*
*    In a previous program you asked the user to enter a percentage and you
*    then changed this into an alpha grade with a subgrade.
*
*    Modify this to handle 10 students.  Print out their Alpha grade and
*    subgrade after each percentage is input.  Calculate the average percentage
*    grade and then also print this out as an average alpha grade and subgrade.
*
*    Hint: to make this easier, first modify the program so that the part with
*    the conversion and printout to grades is now in a function, which you call
*    whenever you want a conversion carried out and printed.    
*
*
******************************************************************************/
