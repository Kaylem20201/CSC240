/*
Program: Math Tutor
Author: Kaylem Brown-Malone
Purpose: Generate and display 2 random numbers, add them, quiz user for the result.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	srand(time(NULL));
	int first = rand() %501;
	int second = rand() %501;
	int sum = first + second;
	int input;

	printf("The first integer is: %i", first);
	printf("\nThe second integer is: %i", second);
	printf("\nEnter the sum of the 2 integers: ");
	scanf("%i", &input);

	if (input == sum) {
		printf("\nCorrect! The sum is %i", sum);
	}
	else {
		printf("\nIncorrect. The correct sum was %i", sum);
	}
}