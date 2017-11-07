#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "Phone.h"

using namespace std;

void pause() {
	int c = 0;
	cin >> c;
}

int main() {
	setlocale(LC_ALL, "rus");
	unsigned const maxAmount = 100; //максимальное количество записей
	fstream fileWork("phoneCatalog", ios_base::in);
	Phone workspace[maxAmount]{};
	int lastNumber = 0; //где в workspace последняя запись

	if (fileWork.is_open()) {
		//читаем,записывая в массив
		while (!fileWork.eof()) {
			readPhone(fileWork, workspace[lastNumber]);
			++lastNumber;
		}
		fileWork.close();
	}
	else {
		fileWork.open("phoneCatalog", ios_base::ate);
		workspace[0].number = 1;
	}
	int order = -1;
	cout << "Возможные действия:" << endl;
	cout << "0 - выйти" << endl;
	cout << "1 - добавить запись" << endl;
	cout << "2 - распечатать все имеющиеся записи" << endl;
	cout << "3 - найти телефон по имени" << endl;
	cout << "4 - найти имя по телефону" << endl;
	cout << "5 - сохранить текущие данные в файл" << endl;
	while (order) {
		cin >> order;
		switch (order) {
			case (1): {
				if (addPhoneNumber(workspace, lastNumber)) {
					cout << "Невозможный запрос. Максимальное количество данных в базе" << endl;
				}
				else {
					cout << "Запись добавлена" << endl;
				}
				break;
			}
			case (2): {
				printPhoneNumbers(workspace, lastNumber);
				break;
			}
			case (3): {
				cout << "Введите имя человека, номер которого ищете" << endl;
				string name;
				cin >> name;
				Phone found = findPhoneByName(workspace, lastNumber, name);
				if (found.number == -1) {
					cout << "Данного человека в базе нет" << endl;
				}
				else {
					cout << "Найденный номер: " << found.phoneNumber << endl;
				}
				break;
			}
			case (4): {
				cout << "Введите номер человека, которого ищете" << endl;
				int phoneNumber = 0;
				cin >> phoneNumber;
				Phone found = findPhoneByNumber(workspace, lastNumber, phoneNumber);
				if (found.number == -1) {
					cout << "Такого номера в базе нет" << endl;
				}
				else {
					cout << "Найденный человек: " << found.name << endl;
				}
				break;
			}
			case (5): {
				writeBackInFile(workspace, lastNumber, fileWork);
				break;
			}
		}
	}
	fileWork.close();
	pause();
	return 0;
}