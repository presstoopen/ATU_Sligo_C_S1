/******************************************************************************
*
* File Name: addFloatFunction.c
*
* Description: Function that will add two float and print resoult
*
* Programmer: Damian Sikora
*
* Date: 29/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

float floatAdd(float a,float b){
	return a + b; /*function will add a and b and return result*/
}

int main(void){
	float answer = 0;
	
	answer = floatAdd(5.123,3.677); /*assign functions return value to var. answer*/
    printf("answer = %0.3f\n", answer);
	
	system("pause");
	return 0;

}