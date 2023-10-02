/******************************************************************************
*
* File Name: triangleArea.c
*
* Description: Program calculate triangle area from given values
*
* Programmer: Damian Sikora
*
* Date: 02/Oct/2023
*
* Version 0.1
*
******************************************************************************/
#include <stdio.h>

void main(vois){
    int x = 0;
    printf("Please enter the integer numcer: ");
    scanf("%d",&x);/*important note on this line is the sign &*/
    printf("\nThe number you have been entered = %d\n", x);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*     The area of a triangle is found by multiplying half the base by the
*     perpendicular height.
*
*     Write a function which will calculate the area of a triangle given the
*     base and height and will return the area.
*
*    Then write a main program which will ask the user for the base and height.
*
*     Call your new function and then print out the result.
*
******************************************************************************/