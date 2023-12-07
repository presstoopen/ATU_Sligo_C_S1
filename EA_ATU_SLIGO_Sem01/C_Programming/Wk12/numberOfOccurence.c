/******************************************************************************
*
* File Name: NumberOfOccurence.c
*
* Description: Program to check the ovvurence of the 20 given numbers.
*
* Programmer: Damian Sikora
*
* Date: 04/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInputArray[20];
    int occureArray[10];
    int i;
    int j;
    int k;

    printf("Input Array: ");
    for(i=0;i<20;i++){
        userInputArray[i] = rand()%10;
        printf("%d", userInputArray[i]);
        if(i<19){
        	printf(",");
		}
		else{
			printf("\n");
		}
    }
    
    for(j=0;j<10;j++){
    	occureArray[j]=0;    	
	}
	
	for(i=0; i<20; i++){
	    k = userInputArray[i];
		occureArray[k] = occureArray[k] +1;
	}
	
	for(j=0;j<10;j++){
		printf("\nnumber %ds is %d", j, occureArray[j]);
	}
	printf("\n");
  

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program to take in 20 integers between 0 and 9 inclusive and put
*    them in an array.
*
*    you can either have the program ask the user for the numbers or you can
*    generate them using the rand() function.
*
*    now determine how many zeros are in the array of numbers, then how many 1s
*    etc all the way up to 9.
*
*    example
*
*    input array  2,3,0,8,2,7,5,2,0,0,1,4,7,8,6,4,9,1,2,1
*
*    number of 0s is 3
*
*    number of 1s is 3
*
*    number of 2s is 4
*
*    number of 3s is 1
*
*    number of 4s is 2
*
*    number of 5s is 1
*
*    number of 6s is 1
*
*    number of 7s is 2
*
*    number of 8s is 2
*
*    number of 9s is 1
*
******************************************************************************/
