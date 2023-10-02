/******************************************************************************
*
* File Name: circumference.c
*
* Description: Program to count circumferece and area or circle with radius = 3
*
* Programmer: Damian Sikora
*
* Date: 27/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>
#include <math.h> /*include math to be able to use pow(radius,2) finction*/

int main(void){
	float PI = 3.14159265;
	int radius = 3; /*define variable for cyrcle radius and assign value 3*/
	
	float circumference = 0;
	float area = 0;
	
	circumference = 2*PI*radius; /*calculate circumference for assigned rad.*/
	area = PI*pow(radius,2); /*calculate area pow function used for radius^2*/
	
	printf("Circumference = %0.4f\nArea = %0.4f\n",circumference, area);
	/*to round the count value to 4 decimal place we can use %0.4f*/
	system("pause");
	return 0;

}