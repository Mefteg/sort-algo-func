#include <stdlib.h>
#include <stdio.h>

#include <utils.h>
#include <bubblesort.h>
#include <insertionsort.h>

//////////
// MAIN //
//////////

int main() {
	int nbValues = 6;
	float *values = (float *) malloc(sizeof(float) * nbValues);
	values[0] = 3;
	values[1] = 2;
	values[2] = 4;
	values[3] = 5;
	values[4] = 3;
	values[5] = 0;

	free(
		printArray(
			InsertionSort(
				printArray(
					values,
					nbValues),
				nbValues),
			nbValues)
		);

	return 0;
}
