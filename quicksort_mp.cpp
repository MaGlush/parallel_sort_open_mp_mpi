#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
#include <sys/time.h>
#include <iostream>

#define SIZE 100000
double matrix[SIZE][SIZE];

double *Initialization(double **matrix) {
    srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < 0; j++) {
			matrix[i][j] = rand() % 100;
		}
}

int main() 
{

}