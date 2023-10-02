/******************************************************************************
*
* File Name: multiplicationFunction.c
*
* Description: Function that multiplicate two variables and print on screen
*
* Programmer: Damian Sikora
*
* Date: 29/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

int integerMul(int a,int b){
	return a * b; /*function will multiplicate a and b and return result*/
}

int main(void){
	int answer = 0;
	
	answer = integerMul(4,3); /*assign functions return value to var. answer*/
    printf("answer = %d\n", answer);
	
	system("pause");
	return 0;

}
