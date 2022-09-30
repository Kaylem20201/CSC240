/*
Program: I/OProject
Author: Kaylem Brown-Malone
Purpose: Store input for first name, age, and last initial and display them back to user
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//declare variables
	char fName[100]; //"String" of characters
	int age;
	char lInitial;

	//Prompt for input, store input
	printf("Input your first name: \n");
	scanf(" %s", &fName);
	printf("Input your age in years: \n");
	scanf(" %i", &age);
	printf("Input the first initial of your last name: \n");
	scanf(" %c", &lInitial);

	//display variables back to user
	printf("Your first name: %s\n", fName);
	printf("Your age: %i\n", age);
	printf("Your last name initial: %c\n", lInitial);

	return 0;
}