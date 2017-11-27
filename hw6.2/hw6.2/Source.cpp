//"����������"
//� ����� ������ ��������� n ������ � ������� ������� m - ��.
//��������� ���������� ����� k ��������� ������� �����, ������� ������ ����� �������� ���������.
//������� � ������� ������������ ������.

#include <iostream>
#include "CircleList.h"

using namespace std;

void createCircleListOfNNumbers(CircleList* list, int n) {
	CircleListElement* head = getHead(list);
		CircleListElement* presentElement = head;
		for (int i = 2; i <= n; ++i) {
			presentElement = addElement(list, presentElement);
			setNumber(presentElement, i);
		}
		circleIt(presentElement, head);
}

int main() {
	setlocale(LC_ALL, "rus");
	// ���� �������� ������
	cout << "������� ���������� ������" << endl;
	int n = 0;
	cin >> n;
	cout << "����� �� ����� ��������?" << endl;
	int m = 1;
	cin >> m;

	// �������� ������������ ������
	CircleList* list = createList();
	createCircleListOfNNumbers(list, n);

	// ���������� �������
	CircleListElement* presentElement = getHead(list);
	while (getSize(list) > 1) {
		for (int i = 1; i < m - 1; ++i) {
			presentElement = getNext(presentElement);
		}
		deleteElement(list, presentElement);
		presentElement = getNext(presentElement);
	}
	int k = getNumber(presentElement);
	cout << "��������� ������� �� " << k << " �����" << endl;

	cin >> n;
	return 0;
}