#ifndef INSERTION_SORT__H
#define INSERTION_SORT__H

#include <utils.h>

/**
* Go up in the array and swap values if necessary
* return the array
*/
float* InsertionSort_goUp(float *_values, int _nbValues, int _j) {
	if (_j < 1 || _values[_j - 1] <= _values[_j]) {
		return _values;
	} else {
		swap(&_values[_j - 1], &_values[_j]);

		return InsertionSort_goUp(_values, _nbValues, (_j - 1));
	}
}

/**
* Sort the array until all values are checked
* return the sorted array
*/
float* InsertionSort_goOn(float *_values, int _nbValues, int _i) {
	if (_i == _nbValues) {
		return _values;
	} else {
		return InsertionSort_goOn(InsertionSort_goUp(_values, _nbValues, _i), _nbValues, (_i + 1));
	}
}

/**
* Sort the array with the Insertion Sort Algorithm
* return the sorted array
*/
float* InsertionSort(float *_values, int _nbValues) {
	return InsertionSort_goOn(_values, _nbValues, 1);
}

#endif