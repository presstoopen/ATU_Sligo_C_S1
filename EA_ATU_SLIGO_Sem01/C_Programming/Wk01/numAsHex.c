/******************************************************************************
*
* File Name: numAsHex.c
*
* Description: Print decimal from 0 to 15 and Hex equivalents
*
* Programmer: Damian Sikora
*
* Date: 21/Aug/2023
*
* Version 1.1
*
******************************************************************************/

#include <stdio.h>

int main(void){
	int decNum = 0;
	printf("Dec\tHex\n");
	printf("-------------\n");
	printf("%d\t%X\n", decNum, decNum);/*to get correct format use cap. X*/
	decNum++;
	printf("%d\t%X\n", decNum, decNum);/*next iteration of decNum*/
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	decNum++;
	printf("%d\t%X\n", decNum, decNum);
	system("pause");
	return 0;
}
