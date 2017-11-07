#include <iostream>
#include <fstream>
#include "qsort.h"

using namespace std;

int commonInt(int* arr, int length) {
	int commonInt = arr[0]; //The most common integer at the moment
	int nowInt = arr[0]; //Integer who's amount we're counting now
	unsigned int maxAmount = 1;
	unsigned amount = 1;
	for (int i = 1; i < length; ++i) {
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
	setlocale(LC_ALL, "rus");
	//Файл ввода input.txt, формат ввода: неотрицательное целое число(количество чисел в массиве),
	//затем столько строк с числами. Вывод в консоль
	ifstream fin("input.txt");
	unsigned int length = 1;
	fin >> length;
	int* sortArray = new int[length] {};
	for (unsigned int i = 0; i < length; ++i) {
		fin >> sortArray[i];
	}
	qsort(sortArray, 0, length);
	fin.close();
	cout << "If some integers appear the same amount of times(which is maximum),\nprogram will print the least integer" << endl;
	cout << commonInt(sortArray, length) << " is the most common int in array" << endl;
	delete[] sortArray;
	pause();
	return 0;
}