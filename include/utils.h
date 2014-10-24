#ifndef UTILS__H
#define UTILS__H

/**
* Print an array
* return the array
*/
float* printArray(float *_array, int _nbValues) {
	printf("[");
	for (int i = 0; i < _nbValues; ++i)
	{
		if (i < _nbValues - 1) {
			printf("%f, ", _array[i]);
		}
		else {
			printf("%f", _array[i]);
		}
	}
	printf("]\n");

	return _array;
}

/**
* Swap two values
* return void
*/
void swap(float *_a, float *_b) {
	float tmp = *_a;
	*_a = *_b;
	*_b = tmp;
}

#endif