#ifndef BUBBLE_SORT__H
#define BUBBLE_SORT__H

#include <utils.h>

/**
* Go up in the array and swap values if necessary
* return 1 if a swap occurs, 0 otherwise
*/
int bubbleSort_goUp(float *_values, int _nbValues, int _swapped, int _i) {
	if (_i == _nbValues) {
		return _swapped;
	} else {
		if (_values[_i - 1] > _values[_i]) {
			swap(&_values[_i - 1], &_values[_i]);
			_swapped = 1;
		}

		return bubbleSort_goUp(_values, _nbValues, _swapped, (_i + 1));
	}
}

/**
* Sort the array until no swap occurs
* return the sorted array
*/
float* bubbleSort_goOn(float *_values, int _nbValues, int _swapped) {
	if (_swapped == 0) {
		return _values;
	} else {
		return bubbleSort_goOn(_values, _nbValues, bubbleSort_goUp(_values, _nbValues, 0, 0));
	}
}

/**
* Sort the array with the Bubble Sort Algorithm
* return the sorted array
*/
float* bubbleSort(float *_values, int _nbValues) {
	return bubbleSort_goOn(_values, _nbValues, 1);
}

#endif