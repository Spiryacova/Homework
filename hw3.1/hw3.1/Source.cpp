#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int swapper = a;
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
				//swap elements with indexes indexOfEdge+1 and index
				swap(sortArray[index], sortArray[indexOfEdge + 1]);
				//swap elements with indexes indexOfEdge and indexOfEdge+1
				swap(sortArray[indexOfEdge], sortArray[indexOfEdge + 1]);
				++indexOfEdge;
			}
		}
		qsort(sortArray, start, indexOfEdge);
		qsort(sortArray, indexOfEdge, end);
	}
	return 0;
}

int commonInt(int* arr, int length) {
	int commonInt = arr[0]; //The most common integer at the moment
	int nowInt = arr[0]; //Integer who's amount we're counting now
	unsigned int maxAmount = 1;
	unsigned amount = 1;
	for (unsigned int i = 1; i < length; ++i) {
		if (arr[i] == nowInt) {
			++amount;
			if (amount > maxAmount) {
				maxAmount = amount;
				commonInt = nowInt;
			}
		}
		else {
			nowInt = arr[i];
			if (amount > maxAmount) {
				maxAmount = amount;
			}
			amount = 1;
		}
	}
	return commonInt;
}

void pause() {
	cout << endl;
	int c;
	cin >> c;
}

int main()
{
	unsigned int length = 1;
	cout << "Enter length of array" << endl;
	cin >> length;
	int* sortArray = new int[length] {};
	cout << "Enter elements of array" << endl;
	for (unsigned int i = 0; i < length; ++i) {
		cin >> sortArray[i];
	}
	qsort(sortArray, 0, length);
	cout << "If some integers appear the same amount of times(which is maximum),\nprogram will print the least integer" << endl;
	cout << commonInt(sortArray, length) << " is the most common int in array" << endl;
	delete[] sortArray;
	pause();
	return 0;
}