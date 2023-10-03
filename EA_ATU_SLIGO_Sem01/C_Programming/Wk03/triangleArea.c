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

int triArea(int base, int height){
    int area = 0;

    area = 0.5*base*height;

    return area; 
}

void main(vois){
    int base = 0;
    int height = 0;
    int area =0;

    printf("Enter base [integer]: ");
    scanf("%d",&base);
    printf("\nEnter height [integer]: ");
    scanf("%d",&height);
    area = triArea(base, height);
    printf("\nThe area of spec. triangle = %d\n", area);

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