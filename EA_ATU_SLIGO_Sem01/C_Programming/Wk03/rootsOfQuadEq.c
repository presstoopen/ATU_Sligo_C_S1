/******************************************************************************
*
* File Name: rootsOfQuadEq.c
*
* Description: Program calculate roots of the quadratic equision
*
* Programmer: Damian Sikora
*
* Date: 04/Oct/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>
#include <math.h> /*Library math.h use to use the sqrt function*/

float firstRoot(int a, int b, int c);
float secoundRoot(int a, int b, int c);

int main(void){
      
    int userInputA = 0;
    int userInputB = 0;
    int userInputC = 0;
    float rootOne, rootTwo;

    printf("Enter a value: ");
    scanf("%d",&userInputA);
    printf("Enter b value: ");
    scanf("%d",&userInputB);
    printf("Enter c value: ");
    scanf("%d",&userInputC);

    rootOne = firstRoot(userInputA,userInputB,userInputC);
    rootTwo = secoundRoot(userInputA,userInputB,userInputC);
    printf("First root = %0.3f\n",rootOne);
	printf("Secound root = %0.3f\n",rootTwo);

    system("pause");
    return 0;
}

float firstRoot(int a, int b, int c){
    float firstResoult;
    firstResoult=(-b+(b*b-4*a*c))/2*a;
    return firstResoult;
}

float secoundRoot(int a, int b, int c){
    float secoundResoult;
    secoundResoult=(-b-(b*b-4*a*c))/2*a;
    return secoundResoult;
}

/******************************************************************************
*
* Task:
*    
*    A Quadratic equation is of the following form
*    ax2 + bx + c  e.g. 2x2 + 5x + 2
*
*    It is often advantageous to know where a quadratic curve crosses the zero
*    line.  These zero crossing points are known as the roots of an equation.
*    To find the roots of a quadratic equation you use the following formula.
*    (-b+/- (b2-4ac)1/2)/2a.
*
*    Write a program to take in the a, b and c values for a quadratic equation.
*    you will need to pass these to two functions, on to calculate -b+ and one
*    to calculate -b- because each function can only return one answer.
*    Then print out the two answers on the screen.
*    Test the program for several quadratic equations, some won't work and may
*    cause crashes.
*
*
******************************************************************************/
