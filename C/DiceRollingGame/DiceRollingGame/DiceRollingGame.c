/*
Program: Dice Rolling Game
Author: Kaylem Brown-Malone
Purpose: Roll 2 dice, display winner + score, give choice to continue to user.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	srand(time(0));

	int dice1wins = 0;
	int dice2wins = 0;
	int ties = 0;

	int dice1res;
	int dice2res;
	bool complete = false;
	char input[5] = {0};

	printf("Dice rolling game!\n");
	while (!complete) {
		dice1res = rand()%6;
		dice2res = rand()%6;
		if (dice1res == dice2res) {
			printf("It's a tie!\n");
			ties++;
		}
		else if (dice1res > dice2res) {
			printf("Dice 1 wins!\n");
			dice1wins++;
		}
		else {
			printf("Dice 2 wins!\n");
			dice2wins++;
		}
		printf("Score board:\nDice 1:\t%i\nDice 2:\t%i\nTies:\t%i\n", dice1wins, dice2wins, ties);
		printf("Play again? (yes, no)");
		scanf(" %5s", input);
		if (strcmp(input,"no")==0) {
			complete = true;
		}
	}
}