/******************************************************************************
*
* File Name: exampleAssesment.c
*
* Description: Program to calculate the required time for how long the turkey
* needs to be cooked to avoid food poisoning.
*
* Programmer: Damian Sikora
*
* Date: 19/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>
#include <math.h>

const int thumbConstant = 20;
const int additionalTime = 20;
const float power = 0.6667;

int main(void){

    int cookingMethod = 0;
    char methodChoosen[2][25] = {"Thumb method", "Pief Panofsky method"};
    float cookingDuration = 0;
    float turkeyWeight = 0;
    int i = 0;
    int delta = 0;

    printf("Please choos the method you would like to calculate the duration\n");
    printf("of torkey to be cooked. Type (0) for thumb method and (1) for ");
    printf("Pief Panofsky method: ");
    scanf("%d", &cookingMethod);
    if((cookingMethod!=0)&&(cookingMethod>1)){
    	printf("The selected number must be 0 or 1\n");
    	return 0;
	}
	else{
	
    printf("Thank you for choosing %s\n", methodChoosen[cookingMethod]);
    printf("Please enter the weight of Torky (in pounds):");
}
    scanf("%f", &turkeyWeight);

    if (!cookingMethod){
        cookingDuration = (thumbConstant * turkeyWeight) + additionalTime;
        printf("\n%0.2f minutes\n", cookingDuration);
    }
    else if (cookingMethod){
        cookingDuration = (60*(pow(turkeyWeight,power)))/1.5;
        printf("\n%0.2f minutes\n", cookingDuration);
    }
    printf("\nEnjoy your turkey!\n");

    system("pause");
    return 0;
}


/******************************************************************************
*
* Task:
*    
*    The favourite meal on Christmas day in Ireland is a Turkey roast.
*    However Irish people don’t prepare this meal throughout most of the
*    rest of the year. This leads to a problem. There is a danger of food
*    poisoning if the Turkey is not cooked for long enough and this could mean
*    large numbers of people in need of medical assistance on a day when there
*    are fewer medical staff available.
*    To keep people safe there is a simple rule of thumb for how long to cook
*    a turkey.
*    Place the fully de-frosted turkey in a pre-heated over and cook for 20
*    minutes per pound plus 20 minutes.
*    However, Pief Panofsky disagrees and says that if you take the weight
*    in pounds as W then the length of time t in minutes to cook it for is
*    given by
*
*    W=((60*pow(W,2/3))/1.5
*
*    The pow() function from #include<math.h> can be used for calculating the
*    power.
*    e.g. ans = pow(2,3); will calculate 23.
*    For your program
*    Ask the user for the weight in pounds.
*    Ask the user if they would like to use method 1 or 2.
*    Calculate the number of minutes for the chosen method.
*    Print out the number of minutes for the chosen method.
*    20 marks will go for proper adherence to the ATU Sligo C coding standard.
*    In particular indentation, proper naming of variables and commenting,
*    both at the top of the file and throughout the program, explaining what
*    is going on.
*   15 marks will go for correctly taking in the value of weight from the user.
*    15 marks will go for correctly taking in the choice of method of the user.
*    15 marks will go for correctly calculating the number of minutes for the
*    first method.
*    20 marks will go for correctly calculating the number of minutes for the
*    second method.
*    15 marks will go for correctly printing out the number of minutes for the
*    chosen method.
*
*
******************************************************************************/
