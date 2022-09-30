/*
Program: Matrix Multiplication
Author: Kaylem Brown-Malone
Purpose: Take 2 matrices from user, multiply them together, display back to user
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printMat(int *mat, int width, int height) { //Accepts a pointer to the first int in a 2 dimensonal array, and it's dimensions
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			printf("[%d]\t", *(mat+(i)+(width*j)));  //Stepping through our "array" in memory
			//Incrementing pointer by 1 will point towards the next int
		}
		printf("\n");
	}
}

int mult(int x, int y, int* mat1, int* mat2, int mat1width, int mat2width) {  //performs the multiplication for one element of the matrix multiplication
	int sum = 0;
	for (int i = 0; i < mat1width; i++) {
		//printf("Debug: i-%d, sum-%d\nMultiplying the following numbers: %d, %d", i, sum, *(mat1 + (y * mat1width) + i), *(mat2 + x + (i * mat2width)));
		sum += *(mat1 + (y * mat1width) + i) * *(mat2 + x + (i * mat2width));
		//product of mat1[i][y] and mat2[x][i] is added
	}
	return sum;
}

int main(void) {
	int mat1width;
	int mat1height;
	int mat2width;
	int mat2height;

	printf("Enter width(number of columns) of first matrix: ");
	scanf(" %d", &mat1width);
	printf("Enter height(number of rows) of first matrix: ");
	scanf(" %d", &mat1height);

	int* mat1 = calloc(mat1width * mat1height, sizeof(int)); //allocating memory for array

	for (int j = 0; j < mat1height; j++) {
		for (int i = 0; i < mat1width; i++) {
			//printf("Debug: %d\t%d", mat1width, mat1height);
			printf("Enter value for matrix 1, row %d, column %d: ", j + 1, i + 1);
			//printf("\nDebug: mat1-%d\t, mat1 increment -%d", mat1, (mat1 + i + (j * mat1width)));
			scanf("%d", (mat1 + i + (j * mat1width))); //Stepping through our "array" in memory
			//Incrementing pointer by 1 will point towards the next int
			printMat(mat1, mat1width, mat1height);
		}
	}


	printf("Enter width(number of columns) of second matrix: ");
	scanf("%d", &mat2width);
	printf("Number of rows of the second matrix must be equal to columns in the first: %d\n", mat1width);
	mat2height = mat1width;

	int* mat2 = calloc(mat2width * mat2height, sizeof(int)); //allocating memory for array

	for (int j = 0; j < mat2height; j++) {
		for (int i = 0; i < mat2width; i++) {
			printf("Enter value for matrix 2, row %d, column %d: ", j + 1, i + 1);
			scanf("%d", (mat2 + i + (j * mat2width))); //Stepping through our "array" in memory
			//Incrementing pointer by 1 will point towards the next int
			printMat(mat2, mat2width, mat2height);
		}
	}

	printf("Multiplying:\n");
	int* mat3 = calloc(mat2width * mat1height, sizeof(int)); //final matrix has the same width as mat 2, and same height as mat1
	for (int j = 0; j < mat1height; j++) {
		for (int i = 0; i < mat2width; i++) {
			*(mat3 + i + (j * mat2width)) = mult(i, j, mat1, mat2, mat1width, mat2width);
		}
	}
	printMat(mat3, mat2width, mat1height);

	free(mat1); //freeing memory
	free(mat2);
	free(mat3);

	return 0;
}