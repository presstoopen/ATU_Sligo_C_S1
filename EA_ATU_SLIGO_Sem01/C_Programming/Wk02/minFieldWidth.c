/******************************************************************************
*
* File Name: minFieldWidth.c
*
* Description: Diffrent ways to prints the data on the screen
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
	int num1 = 12;
	int num2 = 12345;
	printf("%d\n%d\n", num1, num2);
	printf("%5d\n%5d\n", num1, num2);
	printf("%05d\n%05d\n", num1, num2);
	printf("%2d\n%2d\n", num1, num2);
	system("pause");
	return 0;
} 