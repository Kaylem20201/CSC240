/*
Program: Recursion.c
Author: Kaylem Brown-Malone
Description: Implement recursive fibonacci and GCD functions
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int gcd(int num1, int num2) {
	/*gcd(num1, num2) = num2 if num2 <= num1 and num2 divides num1
	gcd(num1, num2) is gcd(num2, num1) if num1 < num2
	gcd(num1, num2) is gcd(num2, num1 % num2) otherwise*/
	if (num2 <= num1 && num1 % num2 == 0)
		return num2;
	else if (num1 < num2)
		return gcd(num2, num1);
	else
		return gcd(num2, num1 % num2);
}

int power(int x, int y) {
	if (y == 0)
		return 1;
	else
		return (x * power(x, y - 1));

}

int main(void) {
	printf("%d\n", fib(7));
	printf("%d\n", gcd(48, 18));
	printf("%d\n", power(7,6));
}