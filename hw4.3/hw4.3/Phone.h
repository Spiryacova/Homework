#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

struct Phone {
	int number; //номер записи
	int phoneNumber; //номер телефона
	string name;
};

bool addPhoneNumber(Phone* arr, int &length);
void printPhoneNumbers(Phone* arr, int length);
Phone findPhoneByName(Phone* arr, int length, string name);
Phone findPhoneByNumber(Phone* arr, int length, int phoneNumber);
bool writeBackInFile(Phone* arr, int length, fstream &workspace);
void readPhone(fstream &fileWork, Phone &readable); 
//читает 3 строки из файла, воспринима€ первую как номер записи, вторую как номер телефона, 
//третью как им€. readable - то, куда читает(€чейка массива это по факту будет)