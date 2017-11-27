#include "qsort.h"

void swap(int &a, int &b) {
	const int swapper = a;
	a = b;
	b = swapper;
}

int choosePoint(int* arr, int start, int end) {
	int point = (arr[start] + arr[end - 1]) / 2;
	return point;
}

void insertSort(int* arr, int start, int end) {
	//end NOT included
	for (int i = start + 1; i < end; ++i) {
		int index = i;
		while ((arr[index] < arr[index - 1]) && (index > 0)) {
			swap(arr[index], arr[index - 1]);
			--index;
		}
	}
}

int qsort(int* sortArray, unsigned int start, unsigned int end) {
	//end is NOT included
	const int lengthToInsertSort = 10;
	const int length = end - start;
	if (length <= 1) {
		return 0;
	}
	if (length <= lengthToInsertSort) {
		insertSort(sortArray, start, end);
	}
	else {
		if ((start == end) || (start == end - 1)) {
			return 0;
		}
		//one step of qsort
		int edge = choosePoint(sortArray, start, end);
		unsigned int indexOfEdge = 0;
		while ((edge > sortArray[indexOfEdge + 1]) && (indexOfEdge < length - 1)) {
			++indexOfEdge;
		}
		for (unsigned int index = indexOfEdge; index < length; ++index) {
			if (edge > sortArray[index]) {
				swap(sortArray[index], sortArray[indexOfEdge + 1]);
				swap(sortArray[indexOfEdge], sortArray[indexOfEdge + 1]);
				++indexOfEdge;
			}
		}
		qsort(sortArray, start, indexOfEdge);
		qsort(sortArray, indexOfEdge, end);
	}
	return 0;
}