/******************************************************************************
*
* File Name: coins.c
*
* Description: Program to calculate how to exchange the coins.
*
* Programmer: Damian Sikora
*
* Date: 18/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

int main(void){

    int userInput = 0;
    int coinName[6] = {50,20, 10, 5, 2, 1};
    int reminder;
    int coinChange[6] = {0,0,0,0,0,0};
    int i;
 
    printf("Enter the amount of money less than 1EURO:");
	scanf("%d",&userInput);
	
/* check qty of 50 Cents */  
    coinChange[0]=userInput/50;
    if(coinChange[0]){
        reminder = userInput-(50*coinChange[0]);
    }
    else{
    	reminder = userInput;
	}
/* check qty of 20 Cents */  
    coinChange[1]=reminder/20;
    if(coinChange[1]){
        reminder = reminder-(20*coinChange[1]);
    }
    coinChange[2]=reminder/10;
     if(coinChange[2]){
        reminder = reminder-(10*coinChange[2]);
    }
/* check qty of 5 Cents */   
    coinChange[3]=reminder/5;
    if(coinChange[3]){
        reminder = reminder-(5*coinChange[3]);
    }
/* check qty of 2 Cents */   
    coinChange[4]=reminder/2;
    if(coinChange[4]){
        reminder = reminder-(2*coinChange[4]);
    }
/* check qty of 1 Cent */
    coinChange[5]=reminder/1;
    if(coinChange[5]){
        reminder = reminder-(1*coinChange[5]);
    }
/* printing the QTY of coins usinf for loop */
    for(i=0; i<6; i++){
        printf("Qty of %d Cent(s) = %d\n", coinName[i], coinChange[i]);
    }
    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Dispite the placement of this program, do not assume that this program
*    requires if statements to solve it.
*
*    Given an amount of money (less than 1.00),
*
*    compute the minimum number of Fifty cent, twenty cent, ten cent, five
*    cent, two cent and one cent coins required to make up the amount.
*
*    And print out the list of coins.
*
*
******************************************************************************/
