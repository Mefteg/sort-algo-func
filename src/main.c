#include <stdlib.h>
#include <stdio.h>

#include <utils.h>
#include <bubblesort.h>
#include <insertionsort.h>
#include <shellsort.h>
#include <mergesort.h>

//////////
// MAIN //
//////////

int main() {
	int nbValues = 8;
	float *values = (float *) malloc(sizeof(float) * nbValues);
	values[0] = 1;
	values[1] = 3;
	values[2] = 4;
	values[3] = 9;
	values[4] = 5;
	values[5] = 6;
	values[6] = 7;
	values[7] = 8;

	float *sortedValues = (float *) malloc(sizeof(float) * nbValues);

	free(
		printArray(
			mergeSort(
				sortedValues,
				printArray(
					values,
					nbValues),
				nbValues),
			nbValues)
		);

	free(values);

	return 0;
}
