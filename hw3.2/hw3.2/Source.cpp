#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

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

void qsort(int* sortArray, unsigned int start, unsigned int end) {
	//end is NOT included
	const int lengthToInsertSort = 10;
	const int length = end - start;
	if (length <= 1) {
		return;
	}
	if (length <= lengthToInsertSort) {
		insertSort(sortArray, start, end);
	}
	else {
		if ((start == end) || (start == end - 1)) {
			return;
		}
		//one step of qsort
		int edge = choosePoint(sortArray, start, end);
		int indexOfEdge = 0;
		while ((edge > sortArray[indexOfEdge + 1]) && (indexOfEdge < length - 1)) {
			++indexOfEdge;
		}
		for (int index = indexOfEdge; index < length; ++index) {
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
}

int binarySearch(int* arr, int start, int end, int findIt) {
	//As always, end is NOT included
	//findIt is what we're looking for
	if (end - start <= 1) {
		return findIt == arr[start] ? start : -1;
	}
	const int edge = (start + end) / 2;
	if (findIt > arr[edge]) {
		return binarySearch(arr, edge, end, findIt);
	}
	if (findIt < arr[edge]) {
		return binarySearch(arr, start, edge, findIt);
	}
	if (findIt == arr[edge]) {
		return edge;
	}
	return -1;
}

void pause() {
	int c = 0;
	cin >> c;
}

void fillArrayManually(int* arr, int length) {
	cout << "Enter " << length << " elements of array" << endl;
	for (int i = 0; i < length; ++i) {
		cin >> arr[i];
	}
}

void fillArrayRand(int* arr, unsigned int length) {
	for (unsigned int i = 0; i < length; ++i) {
		arr[i] = rand();
	}
}

void kRand(unsigned int k, int* arr, unsigned int length) {
	for (unsigned int i = 0; i < k; ++i) {
		const int generated = rand();
		int index = binarySearch(arr, 0, length, generated);
		if (index == -1) {
			cout << generated << " doesn't appear in array" << endl;
		}
		else {
			cout << generated << " appears in array" << endl;
		}
	}
}

void kManually(unsigned int k, int* arr, unsigned int length) {
	cout << "Enter " << k << " integers" << endl;
	for (unsigned int i = 0; i < k; ++i) {
		int findIt = 0;
		cin >> findIt;
		int index = binarySearch(arr, 0, length, findIt);
		if (index == -1) {
			cout << findIt << " doesn't appear in array" << endl;
		}
		else {
			cout << findIt << " appears in array" << endl;
		}
	}
}

int main() 
{
	srand(time(nullptr));
	unsigned int n = 0;
	unsigned int k = 0;
	cout << "Enter number of integers for array(n)\nand number of integers to look for in array(k)" << endl;
	cin >> n >> k;
	cout << endl;
	int* arr = new int[n] {};
	cout << "Fill array randomly or manually?(r/m)" << endl;
	char answer = '0';
	cin >> answer;
	if (answer == 'r') {
		fillArrayRand(arr, n);
	}
	if (answer == 'm') {
		fillArrayManually(arr, n);
	}
	qsort(arr, 0, n);
	cout << "Sorted array: " << endl;
	for (unsigned int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Enter k integers randomly or manually?(r/m)" << endl;
	cin >> answer;
	if (answer == 'r') {
		kRand(k, arr, n);
	}
	if (answer == 'm') {
		kManually(k, arr, n);
	}
	pause();
	delete[] arr;
	return 0;
}