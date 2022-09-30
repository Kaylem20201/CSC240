/*
Program: Arithmetic
Author: Kaylem Brown-Malone
Purpose: Take input from user, perform desire arithmetic, display result
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int firstOp;
	int secondOp;
	int choice;
	int result;

	printf("Enter first integer: ");
	scanf("%i", &firstOp);

	printf("\nEnter second integer: ");
	scanf("%i", &secondOp);

	printf("\nEnter your choice of operation:\n1. Addition\n2. Subtraction(First integer - Second integer)\n3. Division\n");
	scanf("%i", &choice);

	switch (choice) {
	case 1:
		result = firstOp + secondOp;
		break;
	case 2:
		result = firstOp - secondOp;
		break;
	case 3:
		result = firstOp * secondOp;
		break;
	default:
		result = -1;
		printf("\nInvalid choice.");
	}

	printf("\nThe result is: %i", result);
}