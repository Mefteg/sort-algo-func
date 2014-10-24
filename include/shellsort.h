#ifndef SHELL_SORT__H
#define SHELL_SORT__H

#include <utils.h>

const int SHELL_SORT_GAPS[] = {701, 301, 132, 57, 23, 10, 4, 1};
const int SHELL_SORT_NB_GAPS = 8;

/**
* Sort the array until all values are checked
* return the sorted array
*/
float* shellSort_forEachGap(float *_values, int _nbValues, int _currentGapId) {
	if (_currentGapId == SHELL_SORT_NB_GAPS) {
		return _values;
	} else {
		return shellSort_forEachGap(insertionSort(_values, _nbValues, SHELL_SORT_GAPS[_currentGapId]), _nbValues, (_currentGapId + 1));
	}
}

/**
* Sort the array with the Shell Sort Algorithm
* return the sorted array
*/
float* shellSort(float *_values, int _nbValues) {
	return shellSort_forEachGap(_values, _nbValues, 0);
}

#endif