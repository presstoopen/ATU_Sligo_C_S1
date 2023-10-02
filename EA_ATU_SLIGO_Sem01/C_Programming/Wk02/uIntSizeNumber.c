/******************************************************************************
*
* File Name: uIntSizeNumber.c
*
* Description: Practice example of maximum unsigned integer
*
* Programmer: Damian Sikora
*
* Date: 25/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

int main(void){
	unsigned int maxNumber = 4294967295;
	unsigned int minNumber = 0;

	printf("Maximum Unsigned Integer=%u\n", maxNumber); /*use %u for unsigned*/
	printf("Minimum Unsigned Integer=%u\n", minNumber);

	system("pause");
	return 0;
} 