/******************************************************************************
*
* File Name: centigradeToFharenheit.c
*
* Description: Program to convert given low and high temp in C to F.
*
* Programmer: Damian Sikora
*
* Date: 24/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int convertToFharentheit(float userInput);

int main(void){

    float userTempLow = 0;
    float userTempHigh = 0;

    printf("Enter low temp in centigrade: ");
    scanf("%f", &userTempLow);
    printf("Enter high temp in centigrade: ");
    scanf("%f", &userTempHigh);
    
    convertToFharentheit(userTempLow);
    convertToFharentheit(userTempHigh);

    system("pause");
    return 0;
}

int convertToFharentheit(float userInput){
    float fharentheitTemp = (float)9/5*userInput + 32;
    printf("%0.4fC\t%0.4fF\n",(float)userInput, fharentheitTemp);
}

