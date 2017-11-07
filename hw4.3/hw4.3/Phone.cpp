#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "Phone.h"

bool addPhoneNumber(Phone* arr, int &length) {
	if (length >= 100) {
		return 1;
	}
	arr[length].number = length + 1;
	cout << "Введите номер" << endl;
	cin >> arr[length].phoneNumber;
	cout << "Введите имя" << endl;
	cin >> arr[length].name;
	++length;
	return 0;
}

void printPhoneNumbers(Phone* arr, int length) {
	cout << "Номер " << "Телефонный номер " << "Имя" << endl;
	for (int i = 0; i < length; ++i) {
		cout << setw(4) << arr[i].number << setw(12) << arr[i].phoneNumber << arr[i].name << endl;
	}
}

Phone findPhoneByName(Phone* arr, int length, string name) {
	int index = -1;
	for (int i = 0; i < length; ++i) {
		if (arr[i].name == name) {
			index = i;
		}
	}
	if (index == -1) {
		Phone notFound;
		notFound.number = -1;
		return notFound;
	}
	else {
		return arr[index];
	}
}

Phone findPhoneByNumber(Phone* arr, int length, int phoneNumber) {
	int index = -1;
	for (int i = 0; i < length; ++i) {
		if (arr[i].phoneNumber == phoneNumber) {
			index = i;
		}
	}
	if (index == -1) {
		Phone notFound;
		notFound.number = -1;
		return notFound;
	}
	else {
		return arr[index];
	}
}

bool writeBackInFile(Phone* arr, int length, fstream &fileWork) {
	return 0;
}

void readPhone(fstream &fileWork, Phone &readable) {
	fileWork >> readable.number;
	fileWork >> readable.phoneNumber;
	fileWork >> readable.name;
}