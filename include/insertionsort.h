#ifndef INSERTION_SORT__H
#define INSERTION_SORT__H

#include <utils.h>

/**
* Go up in the array and swap values if necessary
* return the array
*/
float* insertionSort_goUp(float *_values, int _nbValues, int _gap, int _j) {
	if (_j < _gap || _values[_j - _gap] <= _values[_j]) {
		return _values;
	} else {
		swap(&_values[_j - _gap], &_values[_j]);

		return insertionSort_goUp(_values, _nbValues, _gap, (_j - _gap));
	}
}

/**
* Sort the array until all values are checked
* return the sorted array
*/
float* insertionSort_goOn(float *_values, int _nbValues, int _gap, int _i) {
	if (_i == _nbValues) {
		return _values;
	} else {
		return insertionSort_goOn(insertionSort_goUp(_values, _nbValues, _gap, _i), _nbValues, _gap, (_i + 1));
	}
}

/**
* Sort the array with the Insertion Sort Algorithm
* return the sorted array
*/
float* insertionSort(float *_values, int _nbValues, int _gap) {
	return insertionSort_goOn(_values, _nbValues, _gap, 1);
}

#endif