/******************************************************************************
*
* File Name: roundInteger.c
*
* Description: Program calculate wage base on working hours including overtime.
*
* Programmer: Damian Sikora
*
* Date: 13/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

#define rate 10

int main(void){

    int workingHours = 0;
    int wage = 0;

    printf("Enter the total week working hours: ");
    scanf("%d", &workingHours);

    if (workingHours>39){
        wage = (workingHours-39)*1.5*rate+390;
        printf("Total pay would be EUROS%d\n", wage);
    }
    else{
        wage = workingHours*rate;
        printf("Total pay would be EUROS\n", wage);
    }

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a function that takes a real number as an argument and returns the
*    integer closest to that number. For example, 38.34 would be returned as
*    38 while 52.738 would be returned as 53.
*
*    Then write a main function to test this.
*
*
******************************************************************************/
