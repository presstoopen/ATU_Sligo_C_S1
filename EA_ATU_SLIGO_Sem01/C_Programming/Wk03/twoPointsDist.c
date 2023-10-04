/******************************************************************************
*
* File Name: twoPointsDist.c
*
* Description: Program calculate distance between two coordinations
*
* Programmer: Damian Sikora
*
* Date: 04/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>
#include <math.h> /*Library math.h use to use the sqrt function*/

float distance=0;

float twoPointsDist(float x1, float y1, float x2, float y2){
    float distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    return distance; 
}

int main(void){
    float x1=0, y1=0, x2=0, y2=0;
      
    printf("Enter x1: ");
    scanf("%f",&x1);
    printf("Enter y1: ");
    scanf("%f",&y1);
    printf("Enter x2: ");
    scanf("%f",&x2);
    printf("Enter y2: ");
    scanf("%f",&y2);

    distance = twoPointsDist(x1, y1, x2, y2);
    printf("The distance between two given coordinations = %f\n", distance);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    The area of a triangle is found by multiplying half the base by the
*    perpendicular height.
*
*    Write a function which will calculate the area of a triangle given
*    the base and height and will return the area.
*
*    Then write a main program which will ask the user for the base and height.
*
*    Call your new function and then print out the result.
*
******************************************************************************/
