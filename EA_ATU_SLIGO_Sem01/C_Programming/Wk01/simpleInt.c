/******************************************************************************
*
* File Name: simpleInt.c
*
* Description: Exetute simple integer operations and print them on the screen
*
* Programmer: Damian Sikora
*
* Date: 19/Aug/2023
*
* Version 1.0
*
******************************************************************************/

#include <stdio.h>

int main(void){
	int x;
	int y;
	int z;
	
	x = 7;
	y = 2;
	z = x + y; /*Addition*/
	printf("%d+%d=%d\n", x,y,z);
	
	z = x-y; /*Subtraction*/
	printf("%d-%d=%d\n", x,y,z);
	
    z = x*y; /*Multiplication - int. only*/
	printf("%d*%d=%d\n", x,y,z);
	
	z = x/y; /*Division*/
	printf("%d/%d=%d\n", x,y,z);
	
	z = x % y; /*Modulus*/
	printf("%d%%%d=%d\n", x,y,z); /*To print %sign the prefix % to be used*/
		
	system("pause");
	return 0;
}
