/******************************************************************************
*
* File Name: additionFunction.c
*
* Description: Function that will add and print the two given variable a and b
*
* Programmer: Damian Sikora
*
* Date: 27/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

int integerAdd(int a,int b){
	return a + b; /*function will add a and b and return result*/
}

int main(void){
	int answer = 0;
	
	answer = integerAdd(5,3); /*assign functions return value to var. answer*/
    printf("answer = %d\n", answer);
	
	system("pause");
	return 0;

}
