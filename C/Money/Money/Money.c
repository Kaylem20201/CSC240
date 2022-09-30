/*
Program: Money
Author: Kaylem Brown-Malone
Purpose: Store input for an amount of money, divide it into currency
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	float total; //store the total money as inputted by user
	int sum; //running total of cents

	int tens, fives, ones, quarters, dimes, nickels, pennies;

	printf("Enter an amount of money: \n");
	scanf("%f", &total); //read in total

	sum = total * 100; //initialze sum as total number of cents, helps avoid conversion errors

	tens = sum / 1000; // dividing to find the currency needed
	sum -= tens*1000; // reduce sum by how much we took out

	fives = sum / 500;
	sum -= fives * 500;

	ones = sum / 100;
	sum -= ones * 100;

	quarters = sum / 25;
	sum -= quarters * 25;

	dimes = sum / 10;
	sum -= dimes * 10;

	nickels = sum / 5;
	sum -= nickels * 5;

	pennies = sum;

	printf("10$\t\t: %i\n", tens);
	printf("5$\t\t: %i\n", fives);
	printf("1$\t\t: %i\n", ones);
	printf("Quarters\t: %i\n", quarters);
	printf("Dimes\t\t: %i\n", dimes);
	printf("Nickels\t\t: %i\n", nickels);
	printf("Pennies\t\t: %i\n", pennies);


}