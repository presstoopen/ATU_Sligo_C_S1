/******************************************************************************
*
* File Name: power.c
*
* Description: Program to determine what is representing bottom 4 bits in
               number given by user.
*
* Programmer: Damian Sikora
*
* Date: 04/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

float powerFunction(float x, int n);

int main(void){

    float x = 3.5;
    int n = 7;
    float result = 0.0;

    result = powerFunction(x, n);    
  
    printf("Result = %0.6f\n", result);

    system("pause");
    return 0;
}

/******************************************************************************
*
* Function Name:  porerFunction
*    
* Input Parameters: float x 
*    Write a function
*    float power( float x, int n)
*    that will compute xn, the nth power of x.
*    Write a main functions that tests it.
*    Check to see that it computes 3.57 .
*    The answer is 6433.929688.
*
*    Note: do not use the pow() function from the <math.h> library.
*
******************************************************************************/

float powerFunction(float x, int n){
    float result = 1.0;
    for(n; n>0; n--){
        result = result * x;
    }
    return result;
}

/******************************************************************************
*
* Task:
*    
*    Write a function
*    float power( float x, int n)
*    that will compute xn, the nth power of x.
*    Write a main functions that tests it.
*    Check to see that it computes 3.57 .
*    The answer is 6433.929688.
*
*    Note: do not use the pow() function from the <math.h> library.
*
******************************************************************************/
