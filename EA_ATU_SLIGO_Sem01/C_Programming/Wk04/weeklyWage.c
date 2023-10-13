/******************************************************************************
*
* File Name: weeklyWage.c
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
*    Write a programme that, given the number of hours an employee worked in
*    a week and the hourly wage, computes the employee’s weekly pay. 
*    Count any hours over 39 as overtime which will be paid at time and a half.
*
*    Example
*
*    Tom's hourly rate is €10.
*    This week Tom worked 43 hours.
*    His pay should be
*    39 * 10 = 390.
*    + 4 * 10 * 1.5 = 60
*
*    Total pay would be €450
*
*
******************************************************************************/
