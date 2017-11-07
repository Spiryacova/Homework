#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void swap(int &a, int &b) {
	int swapper = a;
	a = b;
	b = swapper;
}

int main()
{
	srand(time(0));
	cout << "Enter length of array" << endl;
	unsigned int length;
	cin >> length;
	int *sortArray = new int[length];
	cout << "Array: ";
	for (unsigned int i = 0; i < length; ++i) {
		sortArray[i] = rand();
		cout << sortArray[i] << " ";
	}
	cout << endl;

	int first = sortArray[0];
	unsigned int indexOfFirst = 0;
	//^To know where first is 
	//'cause there will be another index
	while ((first > sortArray[indexOfFirst + 1]) && (indexOfFirst < length - 1)) {
		swap(sortArray[indexOfFirst + 1], sortArray[indexOfFirst]);
	}
	for (unsigned int index = indexOfFirst; index < length; ++index) {
		if (first > sortArray[index]) {
			swap(sortArray[indexOfFirst + 1], sortArray[index]);
			//swap elements with indexes indexOfFirst and indexOfFirst+1
			swap(sortArray[indexOfFirst + 1], sortArray[indexOfFirst]);
			++indexOfFirst;
		}
	}
	for (unsigned int i = 0; i < length; ++i) {
		cout << sortArray[i] << " ";
	}
	delete[] sortArray;

	int forPause = 0;
	cin >> forPause;
	return 0;
}