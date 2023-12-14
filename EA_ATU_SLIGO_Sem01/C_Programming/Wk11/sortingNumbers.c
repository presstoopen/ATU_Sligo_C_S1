/******************************************************************************
*
* File Name: sortingNumbers.c
*
* Description: Program to sort the array.
*
* Programmer: Damian Sikora
*
* Date: 14/Dec/2023
*
* Version 1.0
*
******************************************************************************/
#include <stdio.h>

 /* Function to perform sort on an array*/
void functionSort(int arr[], int n) {
	int i;
	int j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                /* Swap arr[j] and arr[j+1]*/
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    /* Define an array to store ten numbers*/
    int numbers[10];

    /* Prompt the user to input ten numbers*/
    printf("Enter ten numbers:\n");
    int i;
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    /* Perform bubble sort to sort the array in ascending order*/
    functionSort(numbers, 10);

    /* Display the sorted array*/
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

  

    system("pause");
    return 0;
}

/******************************************************************************
*
* Task:
*    
*    Write a program that asks the user to input ten numbers into an array.
*
*    Now sort the array so that it now goes from smallest to largest.
* 
******************************************************************************/
