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
	unsigned const maxAmount = 100; //������������ ���������� �������
	fstream fileWork("phoneCatalog", ios_base::in);
	Phone workspace[maxAmount]{};
	int lastNumber = 0; //��� � workspace ��������� ������

	if (fileWork.is_open()) {
		//������,��������� � ������
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
	cout << "��������� ��������:" << endl;
	cout << "0 - �����" << endl;
	cout << "1 - �������� ������" << endl;
	cout << "2 - ����������� ��� ��������� ������" << endl;
	cout << "3 - ����� ������� �� �����" << endl;
	cout << "4 - ����� ��� �� ��������" << endl;
	cout << "5 - ��������� ������� ������ � ����" << endl;
	while (order) {
		cin >> order;
		switch (order) {
			case (1): {
				if (addPhoneNumber(workspace, lastNumber)) {
					cout << "����������� ������. ������������ ���������� ������ � ����" << endl;
				}
				else {
					cout << "������ ���������" << endl;
				}
				break;
			}
			case (2): {
				printPhoneNumbers(workspace, lastNumber);
				break;
			}
			case (3): {
				cout << "������� ��� ��������, ����� �������� �����" << endl;
				string name;
				cin >> name;
				Phone found = findPhoneByName(workspace, lastNumber, name);
				if (found.number == -1) {
					cout << "������� �������� � ���� ���" << endl;
				}
				else {
					cout << "��������� �����: " << found.phoneNumber << endl;
				}
				break;
			}
			case (4): {
				cout << "������� ����� ��������, �������� �����" << endl;
				int phoneNumber = 0;
				cin >> phoneNumber;
				Phone found = findPhoneByNumber(workspace, lastNumber, phoneNumber);
				if (found.number == -1) {
					cout << "������ ������ � ���� ���" << endl;
				}
				else {
					cout << "��������� �������: " << found.name << endl;
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