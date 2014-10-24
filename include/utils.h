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

/**
* Copy the original array
* return the copy
*/
float* copyArray(float *_original, float *_copy, int _size) {
	for (int i = 0; i < _size; ++i)
	{
		_copy[i] = _original[i];
	}

	return _copy;
}

/**
* Merge arrays 1 and 2 into array 0 at the given offset
* return array 0
*/
float* mergeArrays(float *_array0, float *_array1, int _size1, float *_array2, int _size2) {
	int id1 = 0;
	int id2 = 0;
	int i = 0;
	while (i < (_size1 + _size2)) {
		if (id1 < _size1 && id2 < _size2) {
			if (_array1[id1] < _array2[id2]) {
				_array0[i] = _array1[id1];
				id1 = id1 + 1;
			} else {
				_array0[i] = _array2[id2];
				id2 = id2 + 1;
			}
		} else {
			if (id1 >= _size1) {
				_array0[i] = _array2[id2];
				id2 = id2 + 1;
			} else {
				_array0[i] = _array1[id1];
				id1 = id1 + 1;
			}
		}

		i = i + 1;
	}

	return _array0;
}

#endif