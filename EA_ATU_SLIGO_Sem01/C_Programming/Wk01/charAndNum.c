/******************************************************************************
*
* File Name: charAndNum.c
*
* Description: Adding number to the char and print on screen
*
* Programmer: Damian Sikora
*
* Date: 20/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

int main(void){
	char letter;
	letter = 'A';
	printf("%c\n", letter); /*Output as an expected -> A*/	
	letter = letter + 1;	
	printf("%c\n", letter);/*Output -> B it is because A in Dec=65+1=66*/	
	printf("%d\n", letter);/*Output -> 66 which is equal B in Char*/
	system("pause");
	return 0;
}