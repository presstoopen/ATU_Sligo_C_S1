/******************************************************************************
*
* File Name: specChar.c
*
* Description: Use special character in printf function
*
* Programmer: Damian Sikora
*
* Date: 21/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

int main(void){
	printf("Tab->\t<-Tab\n"); /*\t create 4 spaces same as tab key*/
    system("pause");
	printf("Alert\a\n"); /*\a - plays the alert sound*/		
	system("pause");
	return 0;
}
