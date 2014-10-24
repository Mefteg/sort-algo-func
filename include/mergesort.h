#ifndef MERGE_SORT__H
#define MERGE_SORT__H

#include <utils.h>

/**
* Split the array and merge the sorted parts
* return the sorted array
*/
float* mergeSort_splitAndMerge(float *_tmpValues, float *_values, int _nbValues) {
	if (_nbValues <= 1) {
		return _values;
	} else {
		int nbValues1 = _nbValues / 2;
		int nbValues2 = nbValues1;
		if (_nbValues % 2 == 1) {
			nbValues1 = nbValues1 + 1;
		}

		float *array1 = mergeSort_splitAndMerge(_tmpValues, _values, nbValues1);
		copyArray(array1, _values, nbValues1);
		float *array2 = mergeSort_splitAndMerge((_tmpValues + nbValues1), (_values + nbValues1), nbValues2);
		copyArray(array2, (_values + nbValues1), nbValues2);

		return mergeArrays(_tmpValues, _values, nbValues1, (_values + nbValues1), nbValues2);
	}
}

/**
* Sort the array with the Merge Sort Algorithm
* return the sorted array
*/
float* mergeSort(float *_tmpValues, float *_values, int _nbValues) {
	return mergeSort_splitAndMerge(_tmpValues, _values, _nbValues);
}

#endif